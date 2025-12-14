/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17178
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_14)))))));
        arr_4 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) 2303591209400008704LL)) ? (((/* implicit */int) var_7)) : (var_5))) >= ((~(((/* implicit */int) (signed char)-9))))))), (((unsigned int) arr_1 [i_0]))));
    }
    for (signed char i_1 = 2; i_1 < 11; i_1 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_2 = 1; i_2 < 11; i_2 += 2) 
        {
            var_15 += ((/* implicit */unsigned long long int) ((arr_2 [(_Bool)0] [i_2 + 1]) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-112)))));
            var_16 = ((/* implicit */long long int) var_12);
            var_17 -= (-((~(((/* implicit */int) var_8)))));
            arr_9 [i_1 - 1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((int) var_7)) : (((/* implicit */int) arr_7 [i_2 - 1]))));
        }
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                /* LoopSeq 4 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) % (9429072002678444422ULL)));
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (arr_5 [i_1 - 1] [i_1 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
                }
                for (unsigned int i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    arr_19 [i_1 - 1] [i_1 - 1] [i_6] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_11 [i_1 + 1])));
                    arr_20 [i_6] [i_6] = ((/* implicit */long long int) ((int) var_8));
                    arr_21 [(_Bool)1] [i_3] [i_4] [i_6] = ((/* implicit */long long int) (~(((/* implicit */int) var_8))));
                }
                for (unsigned int i_7 = 3; i_7 < 10; i_7 += 3) 
                {
                    arr_26 [(unsigned char)2] [i_3] [i_3] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))));
                    var_20 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)-114)))) || (((/* implicit */_Bool) ((long long int) var_14)))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (((unsigned long long int) arr_18 [i_1] [i_1] [i_1] [i_1]))));
                    var_22 &= ((/* implicit */_Bool) ((unsigned char) (~(var_9))));
                }
                var_23 = ((/* implicit */unsigned char) (_Bool)1);
                arr_30 [i_1 - 2] [i_1] [i_1] [i_4] = ((/* implicit */unsigned char) 9429072002678444431ULL);
                var_24 *= ((/* implicit */long long int) var_8);
            }
            /* LoopSeq 1 */
            for (short i_9 = 0; i_9 < 12; i_9 += 4) 
            {
                var_25 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9017672071031107187ULL)) ? (9017672071031107194ULL) : (7740824041357871825ULL)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((_Bool) 9017672071031107201ULL)))));
                var_26 = ((/* implicit */signed char) (-(((/* implicit */int) var_14))));
                var_27 ^= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_3)))))));
            }
            arr_33 [i_1] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_14)))) + ((~(var_5)))));
            arr_34 [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1 + 1])) || (((/* implicit */_Bool) 262143U))));
        }
        arr_35 [i_1] [i_1] = ((((/* implicit */unsigned int) var_5)) / (((unsigned int) min((((/* implicit */long long int) var_11)), (var_2)))));
    }
    var_28 = ((/* implicit */unsigned long long int) var_11);
}
