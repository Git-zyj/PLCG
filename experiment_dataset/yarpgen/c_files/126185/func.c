/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126185
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) ((((/* implicit */int) (unsigned char)165)) > (((/* implicit */int) arr_0 [i_0])))))));
        var_16 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 31))))) < ((~(((/* implicit */int) (unsigned char)57)))))))));
    }
    var_17 = ((/* implicit */signed char) (~(((/* implicit */int) var_13))));
    var_18 = ((/* implicit */unsigned short) ((((unsigned long long int) ((var_15) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)90)))))) ^ (((/* implicit */unsigned long long int) ((((long long int) var_4)) ^ (((/* implicit */long long int) (~(1437089040)))))))));
    var_19 *= ((/* implicit */unsigned long long int) 1437089013);
    /* LoopNest 2 */
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        for (unsigned char i_2 = 3; i_2 < 15; i_2 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        for (signed char i_5 = 0; i_5 < 18; i_5 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_18 [i_2] [2] [i_3] [i_4] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) : (130944U))) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)42)))));
                                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((arr_16 [i_3] [i_2 - 1] [i_3] [i_4] [i_5] [8]) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 627160984)))))) > (((/* implicit */unsigned int) min((1437089013), (((/* implicit */int) arr_11 [i_1] [i_2 - 3] [i_3] [i_2 + 1]))))))))));
                                var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned char)220)))) != (((((unsigned long long int) arr_14 [i_1] [i_2] [i_3] [i_2] [4U])) % (((/* implicit */unsigned long long int) ((arr_10 [i_1] [i_2]) ^ (((/* implicit */unsigned int) 627160984)))))))));
                                arr_19 [4] [i_2] [i_2] [i_4] [i_5] [i_1] [i_2] = ((/* implicit */unsigned char) -627160985);
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) var_9))));
                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)34))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)244))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 220005251U)))))) : (max((9034929998984867804ULL), (((/* implicit */unsigned long long int) 8429084990741094560LL))))))));
                var_25 = ((/* implicit */signed char) var_8);
                arr_20 [i_2] = ((/* implicit */unsigned char) (signed char)-46);
            }
        } 
    } 
}
