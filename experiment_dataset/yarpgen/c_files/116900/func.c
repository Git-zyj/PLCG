/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116900
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
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 -= ((/* implicit */signed char) min((min((((/* implicit */unsigned int) (signed char)23)), (363602146U))), (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)189)), (-1))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_10 [i_0 - 1] [i_0 - 1] [7] [i_0] [i_0 - 1] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) (signed char)111)), (0)))))))));
                                arr_11 [5ULL] [(_Bool)1] [(short)7] [(short)7] [i_4] = ((/* implicit */_Bool) max((min((7718011387804714518LL), (((/* implicit */long long int) (unsigned char)55)))), (((/* implicit */long long int) max((500828858U), (((/* implicit */unsigned int) (_Bool)0)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 9; i_5 += 1) 
                    {
                        for (short i_6 = 1; i_6 < 10; i_6 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) max((max((max((((/* implicit */unsigned long long int) (_Bool)1)), (3195527798329088514ULL))), (((/* implicit */unsigned long long int) -6)))), (((/* implicit */unsigned long long int) -2495218775432700685LL))));
                                arr_17 [i_0] [i_1] [i_6] [i_0] [i_6] = ((/* implicit */unsigned int) (_Bool)1);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 |= ((/* implicit */unsigned short) var_3);
    var_20 = ((min((min((1696229519806292869LL), (((/* implicit */long long int) -1740193763)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 15))))))) ^ (((/* implicit */long long int) max((((/* implicit */int) (signed char)-110)), ((+(4194304)))))));
}
