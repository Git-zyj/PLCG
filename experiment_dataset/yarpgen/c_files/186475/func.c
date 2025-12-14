/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186475
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
    var_17 = ((/* implicit */int) 16384853518310032059ULL);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 1; i_2 < 19; i_2 += 1) 
                {
                    var_18 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)-25920))) < (((((/* implicit */_Bool) -691108345)) ? (-4996181397400901614LL) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1)))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            arr_15 [10U] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */signed char) (((_Bool)1) ? (-4996181397400901613LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            var_19 *= ((/* implicit */unsigned short) max((((/* implicit */int) ((signed char) ((unsigned char) (short)24393)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-30698)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (signed char)32))))) ? (((/* implicit */int) max((var_0), (((/* implicit */signed char) var_16))))) : (((/* implicit */int) arr_10 [i_0] [i_1 - 1] [i_2 - 1] [i_1 - 2]))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 23; i_5 += 1) 
                        {
                            var_20 = ((/* implicit */short) (~(((12) ^ (-13)))));
                            arr_18 [i_1] [i_1] [i_5] [i_1] [i_5] [(short)5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_11 [i_1] [i_1] [2] [i_3] [i_3] [i_3]))) ? (4996181397400901614LL) : (((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_5])))))));
                        }
                        for (long long int i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            arr_23 [i_1] [(_Bool)1] [(_Bool)1] [i_3] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) 4996181397400901608LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 4294967295U)))) : (4294967295U)));
                            var_21 += ((/* implicit */signed char) ((_Bool) var_12));
                            arr_24 [i_2] [(_Bool)1] [i_2 - 1] [(_Bool)1] [i_1] = ((/* implicit */long long int) arr_7 [(signed char)3] [(short)15] [i_6]);
                        }
                        for (signed char i_7 = 0; i_7 < 23; i_7 += 1) 
                        {
                            arr_27 [i_1] [(short)6] [i_0] [i_1] = arr_7 [i_0] [i_1 - 3] [i_2 + 2];
                            var_22 ^= ((/* implicit */short) max((((/* implicit */int) min((arr_22 [i_1 - 2] [i_0] [i_1] [i_1] [i_1 - 2]), (((/* implicit */unsigned short) ((_Bool) var_2)))))), (max((((/* implicit */int) ((((/* implicit */_Bool) arr_17 [12U] [i_1] [i_7] [i_1] [i_7])) || (((/* implicit */_Bool) arr_9 [i_0] [(unsigned short)11] [i_2] [i_2] [i_7]))))), ((((_Bool)1) ? (-22) : (((/* implicit */int) (unsigned short)12455))))))));
                            arr_28 [i_0] [i_1] [i_2 - 1] [i_1] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) min(((short)9296), (((/* implicit */short) (_Bool)0))))) ? (((/* implicit */unsigned long long int) arr_7 [20ULL] [i_2] [i_1 + 1])) : (((((/* implicit */_Bool) 4996181397400901635LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42147))) : (15986014288560901855ULL)))));
                        }
                        arr_29 [i_0] [i_1] [i_1] = ((/* implicit */short) max((max((((/* implicit */long long int) arr_3 [i_1 - 3])), (((var_16) ? (arr_8 [i_1] [i_1] [i_2]) : (((/* implicit */long long int) arr_20 [(unsigned short)20] [i_1] [i_2] [i_3] [(unsigned char)0] [i_3] [i_1])))))), (((/* implicit */long long int) ((signed char) ((arr_5 [i_1]) - (((/* implicit */unsigned int) var_1))))))));
                    }
                    arr_30 [i_2] [i_1] [(short)19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)0)), ((short)-1))))) : (15986014288560901855ULL)));
                    var_23 = (+(((/* implicit */int) (unsigned short)20086)));
                }
                for (unsigned short i_8 = 3; i_8 < 22; i_8 += 2) 
                {
                    arr_35 [i_0] [i_1] = ((/* implicit */unsigned short) min((1443093600U), (((/* implicit */unsigned int) (unsigned short)39226))));
                    var_24 = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) % (((/* implicit */int) arr_26 [i_0] [i_1] [i_8] [i_0] [i_0] [i_8 - 1] [i_1]))))) && (((/* implicit */_Bool) ((unsigned char) arr_19 [i_0] [18] [i_1] [i_0] [i_0])))))), (((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)255)), (4996181397400901635LL)))) ? (min((36), (((/* implicit */int) (signed char)82)))) : (((/* implicit */int) arr_17 [i_8] [(unsigned short)20] [i_1 - 1] [5] [(unsigned short)20]))))));
                    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) ((2068476349U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)83))))))) ? (2627180354U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                }
                var_26 = ((/* implicit */unsigned char) (unsigned short)28158);
                arr_36 [i_1] = ((/* implicit */short) arr_1 [i_0]);
            }
        } 
    } 
    var_27 = ((/* implicit */int) var_2);
    var_28 = ((/* implicit */unsigned char) (unsigned short)54829);
}
