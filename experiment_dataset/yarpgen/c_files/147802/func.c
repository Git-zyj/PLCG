/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147802
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
    var_10 = ((/* implicit */_Bool) (+(((/* implicit */int) var_2))));
    var_11 = ((/* implicit */short) var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 20; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_12 = (!((_Bool)1));
                            arr_11 [i_0] [i_2] = (+((~(((/* implicit */int) var_0)))));
                            var_13 = ((/* implicit */_Bool) max((((arr_0 [i_2 + 4] [16]) ? (((/* implicit */int) arr_5 [i_1] [(short)21] [i_3])) : ((-(((/* implicit */int) (unsigned short)65535)))))), (((/* implicit */int) (!(arr_3 [i_2 + 4] [i_2 - 1]))))));
                            /* LoopSeq 3 */
                            for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) /* same iter space */
                            {
                                arr_14 [i_0] [4] [(_Bool)1] [i_3] [i_4] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) arr_8 [11] [i_1] [i_3] [i_4]))))));
                                arr_15 [i_4] [(unsigned short)0] [i_2] [i_1] [i_0] = ((/* implicit */long long int) (~((~(((/* implicit */int) var_9))))));
                            }
                            for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
                            {
                                var_14 += ((/* implicit */_Bool) (~((+((+(((/* implicit */int) arr_7 [i_1]))))))));
                                var_15 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_1))));
                                var_16 = ((/* implicit */int) (!(var_4)));
                                var_17 = ((/* implicit */long long int) max(((+(arr_12 [i_3] [i_3] [14] [i_3] [i_3] [i_3] [i_3]))), (max((-1234529942), ((-(((/* implicit */int) var_8))))))));
                            }
                            for (unsigned short i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
                            {
                                var_18 = (-((~((+(((/* implicit */int) var_2)))))));
                                arr_22 [i_0] [i_2 - 1] [i_3] [i_6] = (!(((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned short) ((_Bool) var_8)))))));
                                var_19 = max(((-((~(((/* implicit */int) var_9)))))), ((~((~(-1234529942))))));
                                var_20 = ((/* implicit */_Bool) (~((+((+(arr_6 [(_Bool)1] [(_Bool)1] [i_3])))))));
                            }
                        }
                    } 
                } 
                arr_23 [(_Bool)1] [(unsigned char)9] = ((/* implicit */int) (!((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0] [i_1])))))))));
                arr_24 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [10LL] [i_1] [i_1])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_1])))))));
            }
        } 
    } 
}
