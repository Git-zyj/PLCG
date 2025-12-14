/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158287
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-9483)) & (((/* implicit */int) (short)-26009))))) ^ ((~(arr_0 [i_0]))))));
                                var_12 *= ((/* implicit */signed char) ((((((_Bool) (signed char)91)) ? (((/* implicit */int) (signed char)-27)) : (((/* implicit */int) var_1)))) % ((-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) >= (-15LL))))))));
                                var_13 = ((/* implicit */unsigned short) arr_11 [i_1] [i_1] [i_1] [i_1] [i_1]);
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */short) (signed char)-74);
            }
        } 
    } 
    var_15 = ((((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14012))) < (144115119356379136ULL))))))) >= (9170918446238001448LL));
    var_16 = ((/* implicit */signed char) max((var_16), ((signed char)120)));
    var_17 &= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((9170918446238001448LL) != (((/* implicit */long long int) ((/* implicit */int) var_7)))))) | (((/* implicit */int) (_Bool)0))))) >= (max((18302628954353172480ULL), (((/* implicit */unsigned long long int) (signed char)-96))))));
}
