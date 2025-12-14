/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127568
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */long long int) ((((((/* implicit */int) arr_0 [i_0] [(unsigned short)4])) <= (((/* implicit */int) var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_0 [i_0] [i_1]), (((/* implicit */unsigned char) arr_2 [i_1] [i_1] [i_1])))))) : (max((arr_1 [i_1]), (((/* implicit */unsigned int) var_4))))));
                var_10 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_1])) <= (((/* implicit */int) arr_3 [i_1])))))) <= (arr_1 [(unsigned char)16])));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 3; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)54)) > (((/* implicit */int) arr_2 [i_1] [i_3 - 3] [i_3]))))) >> (((/* implicit */int) min((arr_8 [i_0] [i_0] [i_3 - 3] [i_3 - 1]), (var_9))))));
                            var_12 = (-((+(((var_5) >> (((var_8) - (13522433323996328888ULL))))))));
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
                            {
                                var_13 *= ((/* implicit */unsigned char) arr_8 [(unsigned char)9] [i_1] [(unsigned char)9] [i_3]);
                                var_14 = (short)-13839;
                            }
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned long long int) arr_2 [i_1] [i_1] [19U]);
            }
        } 
    } 
    var_16 = ((/* implicit */short) var_2);
    var_17 = ((/* implicit */unsigned char) var_6);
}
