/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104295
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
    var_18 |= min((((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) var_2)) < (var_5))))) : (var_10))), (((/* implicit */unsigned int) min(((~(((/* implicit */int) (unsigned char)51)))), (((/* implicit */int) var_13))))));
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((unsigned long long int) max((((/* implicit */unsigned long long int) var_11)), (var_3)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((~(arr_0 [i_0]))) / (((/* implicit */long long int) var_1))))) ? (((((/* implicit */_Bool) (unsigned char)4)) ? (min((var_7), (((/* implicit */unsigned long long int) var_9)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) ^ (var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(((/* implicit */int) (short)13210)))) > (min((733035131), (((/* implicit */int) (unsigned char)3))))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) var_5))) ? (min((arr_3 [i_0 + 3]), (arr_3 [i_0 + 2]))) : (((((/* implicit */_Bool) var_15)) ? (arr_3 [i_0 - 1]) : (((/* implicit */unsigned long long int) arr_7 [i_0 + 1] [i_0 + 1]))))));
                    var_20 = ((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 - 1] [i_0 + 3]))) + (var_10))), (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) / (((/* implicit */int) ((unsigned char) var_11))))))));
                    var_21 = ((((/* implicit */_Bool) min((max((var_3), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))) ? (max((var_5), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) != (var_17)))))) : (((/* implicit */long long int) var_15)));
                }
            } 
        } 
        arr_11 [i_0] &= ((/* implicit */int) var_8);
        arr_12 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (arr_3 [i_0 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)87)))))));
    }
    /* vectorizable */
    for (long long int i_3 = 2; i_3 < 12; i_3 += 2) /* same iter space */
    {
        arr_16 [i_3] [i_3] = ((/* implicit */unsigned long long int) (unsigned char)44);
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((long long int) 16861229648240764182ULL)))));
        arr_17 [i_3 - 2] [i_3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)56637))));
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
        {
            arr_20 [i_3] [i_3] = ((/* implicit */unsigned int) (+(5269418988816468673LL)));
            /* LoopNest 2 */
            for (long long int i_5 = 0; i_5 < 15; i_5 += 2) 
            {
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_27 [i_3 + 2] [i_3] [i_3 + 2] [i_3] [i_3 - 1] = ((/* implicit */unsigned long long int) ((2147483647) * (((/* implicit */int) (_Bool)0))));
                        arr_28 [i_3] [i_3] [i_3] [i_3 + 1] = ((/* implicit */unsigned int) ((unsigned char) var_17));
                    }
                } 
            } 
            var_23 += ((/* implicit */long long int) (short)13210);
            var_24 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_6 [i_4] [i_3])) : (((/* implicit */int) var_16)))));
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(536968069U)))) ? (var_1) : (((/* implicit */int) arr_1 [i_4]))));
        }
        for (long long int i_7 = 0; i_7 < 15; i_7 += 2) 
        {
            arr_32 [i_7] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_3 - 2]))));
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25488))) == (var_12)));
            /* LoopNest 2 */
            for (unsigned char i_8 = 0; i_8 < 15; i_8 += 2) 
            {
                for (unsigned short i_9 = 0; i_9 < 15; i_9 += 2) 
                {
                    {
                        arr_40 [i_3] [i_7] [i_8] [i_9] [5LL] = ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */unsigned long long int) ((var_17) & (arr_29 [i_7])))) : (arr_38 [i_3 + 3]));
                        arr_41 [i_3] [i_7] [i_7] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_3 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3]))) : (var_5)));
                    }
                } 
            } 
            arr_42 [i_3] [i_7] [i_7] &= ((/* implicit */short) ((((/* implicit */int) var_11)) + (((/* implicit */int) ((unsigned short) (unsigned short)14707)))));
            arr_43 [i_7] [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551613ULL)))))));
        }
    }
    /* LoopNest 2 */
    for (unsigned char i_10 = 0; i_10 < 17; i_10 += 2) 
    {
        for (unsigned long long int i_11 = 1; i_11 < 16; i_11 += 2) 
        {
            {
                var_27 = ((/* implicit */int) arr_50 [i_10] [8ULL] [8ULL]);
                arr_51 [i_10] [i_11] [i_10] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)32759))));
                arr_52 [i_11] = ((/* implicit */long long int) (+(((unsigned long long int) arr_45 [i_11 - 1] [i_11 + 1]))));
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */unsigned long long int) ((var_11) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-13233))) : (536968057U)))), (var_3))));
}
