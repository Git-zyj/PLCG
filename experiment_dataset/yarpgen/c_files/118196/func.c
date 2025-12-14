/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118196
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
    var_14 = max((((/* implicit */long long int) max((min((var_5), (((/* implicit */int) var_9)))), (((/* implicit */int) min((var_9), (var_9))))))), (max((min((((/* implicit */long long int) (signed char)-1)), (26198587694715102LL))), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_7)), (var_1)))))));
    var_15 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (signed char)-1)), (var_8)))), (min((((/* implicit */unsigned long long int) var_0)), (var_2))))), (max((((/* implicit */unsigned long long int) min(((signed char)0), ((signed char)-1)))), (min((((/* implicit */unsigned long long int) var_11)), (var_6)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */short) min((max((max((arr_2 [i_1] [i_1]), (arr_2 [i_0] [i_1]))), (((/* implicit */int) max(((unsigned short)512), (((/* implicit */unsigned short) arr_1 [i_0]))))))), (min((min((((/* implicit */int) arr_1 [i_0])), (arr_2 [i_0] [(signed char)5]))), (min((arr_3 [i_0] [i_1] [(signed char)1]), (((/* implicit */int) (unsigned short)19569))))))));
                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) (unsigned short)65535)), (arr_0 [i_0] [i_0]))), (max((((/* implicit */long long int) (unsigned short)6)), (var_0)))))), (min((max((var_6), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_3 [i_1] [0LL] [i_0])), (26198587694715123LL)))))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 7; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) max((arr_4 [i_1]), (var_5)))), (max((((/* implicit */unsigned long long int) arr_6 [i_1] [i_1])), (arr_9 [i_4] [i_3 - 2] [i_1] [i_1] [i_0]))))), (min((max((((/* implicit */unsigned long long int) (_Bool)0)), (var_6))), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_1 [i_4])), (arr_3 [i_4] [i_1] [i_4]))))))));
                                var_19 = ((/* implicit */signed char) max((((/* implicit */long long int) max((min((var_5), (((/* implicit */int) var_12)))), (min((1661327624), (((/* implicit */int) var_8))))))), (max((26198587694715102LL), (((/* implicit */long long int) (unsigned char)255))))));
                                var_20 = ((/* implicit */long long int) min((var_20), (max((((/* implicit */long long int) max((max((((/* implicit */unsigned int) var_10)), (4243594723U))), (((/* implicit */unsigned int) min(((signed char)-45), ((signed char)-1))))))), (max((min((((/* implicit */long long int) (short)-15838)), (26198587694715101LL))), (((/* implicit */long long int) min((var_9), (var_9))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
