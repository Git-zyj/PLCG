/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184533
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */int) min((((((8403409170589040491LL) & (((/* implicit */long long int) var_10)))) + ((~(-8403409170589040488LL))))), (((/* implicit */long long int) var_15))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_0] [i_0]))) ? (min((((/* implicit */long long int) arr_1 [i_0])), (8403409170589040493LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) -1880302916))))));
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 4 */
        for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            arr_9 [1U] [6LL] [i_1] = ((/* implicit */unsigned int) (unsigned char)217);
            var_20 = ((/* implicit */short) (-(min((-8403409170589040491LL), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)217)) - (((/* implicit */int) var_13)))))))));
        }
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            var_21 = ((/* implicit */int) ((((-2944444128688579628LL) + (9223372036854775807LL))) << ((((+(((/* implicit */int) arr_6 [(short)12])))) - (52966)))));
            var_22 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)138))));
            var_23 += ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) arr_1 [i_1])))))) * (((unsigned int) arr_1 [i_1]))));
            var_24 = ((/* implicit */int) min((((/* implicit */long long int) -1073973048)), (arr_10 [i_3] [i_3])));
        }
        for (int i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                var_25 *= ((/* implicit */short) min(((!(((/* implicit */_Bool) 32256LL)))), (((((/* implicit */_Bool) (unsigned short)7995)) || (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-1)))))))));
                var_26 -= ((/* implicit */short) (((!(((/* implicit */_Bool) (unsigned char)200)))) ? (((((/* implicit */_Bool) arr_11 [i_1] [i_1])) ? (var_2) : (((/* implicit */long long int) -1880302916)))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_2 [i_1] [i_5]))))));
            }
            arr_16 [i_4] [i_1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)17450)) > (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_11 [i_1] [i_1]))))))))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)215))) : (1LL)))));
            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_1] [i_4])) | ((+(arr_14 [i_1] [i_1] [i_1])))));
        }
        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 4) 
        {
            arr_20 [i_1] [i_1] [i_1] = ((/* implicit */signed char) var_8);
            arr_21 [i_1] = ((/* implicit */unsigned int) min(((~(var_8))), (((/* implicit */int) (!(((/* implicit */_Bool) -7012275492372648440LL)))))));
            arr_22 [i_1] [i_1] [i_6] = ((/* implicit */short) min(((+(((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) var_0))))));
            arr_23 [i_1] [i_6] [(unsigned char)7] |= ((/* implicit */unsigned long long int) 2944444128688579627LL);
        }
        arr_24 [(signed char)5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 16919875190691457501ULL)) ? (min((arr_15 [i_1]), (((((/* implicit */_Bool) (unsigned char)87)) ? (-1880302916) : (1073973020))))) : (((/* implicit */int) (short)-30706))));
    }
    for (int i_7 = 0; i_7 < 19; i_7 += 2) /* same iter space */
    {
        var_28 ^= ((/* implicit */_Bool) (+(min((((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (arr_2 [i_7] [i_7])))), (var_2)))));
        var_29 = ((/* implicit */unsigned long long int) max((min(((short)30706), (((/* implicit */short) var_19)))), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)-30706))) > (arr_17 [i_7] [i_7] [i_7]))))));
        var_30 = -642187182;
        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) - (((/* implicit */int) arr_27 [i_7]))))) || (((var_2) != (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-72))) : (var_18))))))));
        arr_29 [i_7] [i_7] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) <= (((/* implicit */int) (unsigned char)82)))))));
    }
    var_32 = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-72))));
    var_33 -= ((/* implicit */long long int) (-(min((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))), (var_17)))));
}
