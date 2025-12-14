/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130502
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
    var_16 = min((((/* implicit */long long int) var_10)), (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (max((var_2), (var_2))) : (((/* implicit */long long int) ((/* implicit */int) max((var_4), (((/* implicit */unsigned char) var_10)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 147411525)) ? (var_8) : (((/* implicit */int) arr_1 [i_0]))))));
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2348731167U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : (arr_2 [i_3 - 2] [i_0])))) ? (((arr_11 [i_0] [i_1] [i_2] [i_3] [i_4]) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_8 [i_1] [i_2] [i_1] [i_1] [i_1] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1346457318)) || (((/* implicit */_Bool) -1346457298))))))));
                                var_18 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) var_14)) == (var_7))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)37665)) ? (arr_4 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) + (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
        arr_12 [i_0] = ((/* implicit */unsigned short) arr_4 [i_0]);
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) 3145660542U)) || (((/* implicit */_Bool) arr_0 [i_0]))))))))));
        arr_13 [i_0] [i_0] = ((((/* implicit */int) (!(arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])))) | ((-(((/* implicit */int) arr_1 [i_0])))));
    }
    var_21 = ((/* implicit */unsigned long long int) var_6);
}
