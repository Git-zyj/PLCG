/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153097
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
    var_19 = ((/* implicit */short) 17095226227382344206ULL);
    var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((1351517846327207409ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)71))))))));
    var_21 = ((/* implicit */unsigned char) var_9);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_6);
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_2 = 3; i_2 < 12; i_2 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned long long int) (signed char)-102);
                    arr_12 [(unsigned char)3] [i_1] [i_3] [i_2] [i_1] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_7)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_9 [i_2])))) : (((((/* implicit */_Bool) 10284449213667633271ULL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_2]))))));
                    arr_13 [i_2] [i_1] [i_1] [i_3] [i_0 - 3] [(unsigned char)12] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_3])) - (((/* implicit */int) arr_6 [i_2] [i_2] [i_2] [i_2 - 1]))));
                }
                for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) /* same iter space */
                {
                    arr_16 [i_2] [i_1] [(_Bool)1] [i_4] = ((/* implicit */unsigned char) arr_8 [(unsigned char)3] [i_2]);
                    arr_17 [i_2] [(_Bool)1] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)11))));
                    arr_18 [i_0] [(unsigned short)9] [i_2] [i_4] = ((/* implicit */unsigned char) arr_10 [i_4] [i_2] [6LL] [i_0 + 4]);
                }
                arr_19 [i_2] = ((/* implicit */signed char) var_12);
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_23 [i_0] [i_1] [i_5] = (unsigned char)242;
                arr_24 [i_0] [i_5] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_5] [i_5] [i_5] [i_1] [i_0]))));
                var_23 = ((/* implicit */_Bool) arr_8 [i_5] [i_5]);
            }
            arr_25 [i_0 - 2] [i_0 - 2] [i_0 - 2] = ((/* implicit */signed char) ((max(((~(((/* implicit */int) (unsigned char)198)))), (((/* implicit */int) var_8)))) / (((/* implicit */int) arr_6 [i_0] [i_0] [(unsigned short)10] [i_0]))));
            arr_26 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) var_9);
            arr_27 [i_1] = ((/* implicit */long long int) (((-(((/* implicit */int) var_13)))) < (((/* implicit */int) arr_2 [i_0] [i_0]))));
            /* LoopSeq 2 */
            for (unsigned char i_6 = 2; i_6 < 12; i_6 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    arr_34 [i_0] [i_7 - 1] [i_1] [i_7] = ((/* implicit */_Bool) arr_5 [i_0 + 2]);
                    arr_35 [(unsigned char)6] [i_6] [i_0] [i_1] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((short) (unsigned char)13)))))) && (((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) arr_30 [i_7 - 1] [i_7] [(_Bool)1] [(_Bool)1] [i_7] [i_7]))));
                }
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    arr_39 [i_0] [i_1] [i_6] [i_1] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                    var_25 = ((/* implicit */_Bool) ((unsigned long long int) var_5));
                    arr_40 [i_0] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_8 - 1])) ? (1351517846327207410ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                }
                arr_41 [i_0 + 3] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!((_Bool)1)))), ((-(((/* implicit */int) max(((unsigned char)245), ((unsigned char)182))))))));
                arr_42 [13ULL] [i_1] [i_6] [3ULL] = min(((_Bool)1), ((_Bool)1));
            }
            for (unsigned char i_9 = 2; i_9 < 12; i_9 += 4) /* same iter space */
            {
                var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) arr_38 [i_0]))));
                arr_46 [i_0] [i_9] = ((/* implicit */unsigned long long int) var_8);
                /* LoopNest 2 */
                for (signed char i_10 = 1; i_10 < 13; i_10 += 4) 
                {
                    for (unsigned short i_11 = 4; i_11 < 12; i_11 += 4) 
                    {
                        {
                            arr_51 [i_1] [i_10] [i_10] = ((/* implicit */unsigned char) ((long long int) var_7));
                            arr_52 [i_0] [i_10] [i_0] [(unsigned short)13] [10ULL] = ((/* implicit */_Bool) (short)-20129);
                            arr_53 [i_11] [i_10] [i_10] [i_0] = ((/* implicit */unsigned char) (~(9046791934511850159LL)));
                            arr_54 [i_10] [i_10] = ((arr_30 [7ULL] [i_1] [7ULL] [i_9 - 2] [i_10] [i_11]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            }
        }
    }
}
