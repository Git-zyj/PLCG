/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126770
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
    for (int i_0 = 4; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    {
                        var_11 = ((/* implicit */long long int) (!((!(min((var_7), (var_7)))))));
                        arr_13 [i_0] = ((/* implicit */int) max((var_4), (((/* implicit */unsigned int) var_7))));
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 13; i_4 += 1) /* same iter space */
                        {
                            arr_17 [(unsigned char)8] [i_1] [i_2 + 1] [i_1] [i_0] &= ((/* implicit */short) var_3);
                            var_12 *= ((/* implicit */_Bool) (+(var_1)));
                        }
                        for (short i_5 = 0; i_5 < 13; i_5 += 1) /* same iter space */
                        {
                            var_13 = ((/* implicit */long long int) var_2);
                            var_14 = ((/* implicit */_Bool) (+(max((var_4), (((/* implicit */unsigned int) arr_6 [i_0 + 1] [i_0] [i_0 + 3]))))));
                            var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) max((max((var_8), (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) max((((/* implicit */short) var_3)), (arr_15 [i_3] [6LL])))))))));
                            var_16 = ((/* implicit */unsigned short) var_1);
                        }
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned char) var_10);
    }
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
    {
        arr_24 [i_6] = min((max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_22 [i_6 + 1]))))), (max((((/* implicit */long long int) var_2)), (var_8))))), (((/* implicit */long long int) min((((/* implicit */unsigned char) var_7)), (arr_23 [i_6] [i_6])))));
        var_18 &= var_8;
    }
    for (long long int i_7 = 0; i_7 < 24; i_7 += 2) 
    {
        var_19 = ((/* implicit */_Bool) var_6);
        arr_27 [i_7] [i_7] = ((/* implicit */long long int) (+((+((-(var_9)))))));
        var_20 ^= ((/* implicit */_Bool) max((max((arr_25 [i_7]), (((/* implicit */unsigned short) max((((/* implicit */short) var_7)), (var_2)))))), (arr_25 [i_7])));
    }
    var_21 = ((/* implicit */long long int) max((var_9), (var_4)));
}
