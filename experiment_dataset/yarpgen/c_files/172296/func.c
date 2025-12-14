/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172296
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0 - 2] [i_0 - 2] = ((/* implicit */unsigned char) (((((~(((/* implicit */int) var_19)))) + (2147483647))) << (((((/* implicit */int) var_4)) - (244)))));
        var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)59583)) ? (-995048176252806748LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) ^ (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 9; i_1 += 3) 
    {
        var_21 = ((/* implicit */signed char) ((_Bool) arr_0 [i_1]));
        var_22 = ((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_1 + 1]))));
        arr_5 [i_1] [i_1] = (+(((/* implicit */int) arr_4 [7LL])));
        arr_6 [i_1] = ((/* implicit */_Bool) (~(16474006690314972976ULL)));
    }
    /* LoopSeq 4 */
    for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 2) 
    {
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [i_2 + 1]))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) | (((/* implicit */int) var_11))))) : (10735416160468564641ULL))))))));
        var_24 = ((/* implicit */signed char) -1LL);
    }
    for (signed char i_3 = 1; i_3 < 16; i_3 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_4 = 2; i_4 < 16; i_4 += 1) 
        {
            arr_17 [i_3] [i_4] = ((/* implicit */unsigned char) (+(((unsigned int) var_12))));
            arr_18 [i_3] [i_3] = ((/* implicit */short) (_Bool)1);
        }
        for (long long int i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3]))) : (1837120466U)))) && (((/* implicit */_Bool) ((arr_10 [i_3]) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (2829003581U)))));
            arr_21 [i_3] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (signed char)65)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3]))) : (var_7))), (((/* implicit */unsigned long long int) 4598485477041691406LL))));
        }
        for (long long int i_6 = 3; i_6 < 15; i_6 += 1) 
        {
            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((short) arr_12 [i_6] [(_Bool)1])))));
            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) var_10))) || (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))))))));
        }
        arr_24 [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_11 [i_3 + 1] [i_3 + 2]);
        var_28 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_22 [i_3 + 1] [i_3 + 1] [i_3 + 2])) ? (arr_22 [i_3 + 2] [i_3 - 1] [i_3 - 1]) : (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)11)))));
        arr_25 [i_3] = ((/* implicit */unsigned long long int) ((_Bool) (+(((((/* implicit */_Bool) (short)-27933)) ? (((/* implicit */int) arr_20 [i_3])) : (((/* implicit */int) arr_12 [i_3] [i_3])))))));
        arr_26 [i_3] [i_3] = ((/* implicit */int) (_Bool)0);
    }
    for (signed char i_7 = 1; i_7 < 16; i_7 += 1) /* same iter space */
    {
        arr_29 [i_7] = ((/* implicit */_Bool) var_2);
        var_29 *= ((/* implicit */int) (((~(var_3))) > (((/* implicit */int) max((var_15), (((/* implicit */unsigned short) (short)10726)))))));
        arr_30 [i_7] [i_7] &= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */short) ((2709284171U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [4ULL] [i_7 - 1])))))), ((short)7234)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_7 + 1] [i_7 - 1]))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) / (4398046494720ULL)))))));
        var_30 |= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned char)205)) ? (12945474665531709516ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65472))))), (((/* implicit */unsigned long long int) max((((/* implicit */short) (signed char)-81)), ((short)273))))));
    }
    /* vectorizable */
    for (signed char i_8 = 1; i_8 < 16; i_8 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_9 = 0; i_9 < 18; i_9 += 1) 
        {
            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((((/* implicit */int) (signed char)-123)) != (((/* implicit */int) arr_12 [i_8] [(signed char)2])))))));
            arr_37 [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_36 [i_8] [i_9])) ? (arr_34 [i_8 + 2] [i_8 - 1] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
        }
        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (2100775700) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) ((352199968) != (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) (signed char)-23)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)50))))));
        arr_38 [i_8] = ((/* implicit */unsigned int) ((unsigned long long int) arr_16 [i_8 - 1]));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_10 = 1; i_10 < 11; i_10 += 3) 
    {
        arr_43 [i_10 + 1] [i_10] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
        var_33 = ((/* implicit */signed char) ((unsigned char) arr_35 [i_10 + 1]));
    }
    /* LoopNest 3 */
    for (short i_11 = 0; i_11 < 14; i_11 += 4) 
    {
        for (long long int i_12 = 0; i_12 < 14; i_12 += 2) 
        {
            for (unsigned char i_13 = 2; i_13 < 11; i_13 += 3) 
            {
                {
                    var_34 = ((/* implicit */unsigned long long int) ((long long int) 1152162526U));
                    var_35 = ((/* implicit */unsigned int) max((var_35), ((-(((3130336045U) >> ((((~(((/* implicit */int) (signed char)126)))) + (158)))))))));
                    arr_54 [i_12] = ((/* implicit */long long int) 208116164U);
                    arr_55 [i_11] [i_13] = ((((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) (short)-13649)))))) ? ((~(((/* implicit */int) max((((/* implicit */signed char) var_12)), ((signed char)1)))))) : (((((/* implicit */int) (short)19698)) << (((/* implicit */int) (unsigned char)0)))));
                }
            } 
        } 
    } 
    var_36 += var_5;
}
