/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189369
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
    var_13 = var_8;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            arr_13 [2ULL] [i_3] = (+(max((arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]), (arr_0 [i_0 - 1]))));
                            var_14 = ((((/* implicit */_Bool) ((arr_12 [i_0 - 1] [i_3]) << (((arr_1 [i_2]) - (6490964762137837663ULL)))))) ? (arr_1 [i_0 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_7 [i_1]) <= (arr_12 [i_2 - 2] [i_3]))))));
                        }
                    } 
                } 
                arr_14 [i_0 + 1] = ((/* implicit */unsigned long long int) ((max((18446744073709551611ULL), (((14126908605097714082ULL) ^ (14126908605097714082ULL))))) != ((~(((((/* implicit */_Bool) arr_10 [i_0] [i_1] [0ULL])) ? (14126908605097714073ULL) : (arr_9 [i_1] [i_1] [i_1] [i_0])))))));
            }
        } 
    } 
    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(16365041606958729751ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) != (var_7))))) : ((-(14126908605097714073ULL)))))) ? (14126908605097714088ULL) : ((~(((var_1) | (var_8))))));
}
