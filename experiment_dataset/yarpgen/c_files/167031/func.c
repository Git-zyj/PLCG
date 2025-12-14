/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167031
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
    for (unsigned int i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    var_18 |= ((/* implicit */signed char) max((((/* implicit */int) min(((unsigned char)242), ((unsigned char)63)))), ((-(((/* implicit */int) (short)-5877))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 18; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (+(min((14854409096670955774ULL), (((/* implicit */unsigned long long int) (short)5893)))))))));
                                var_20 = max(((-(2989738917U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)187)))))))));
                            }
                        } 
                    } 
                }
                var_21 |= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 5981192316530609949LL)) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)-1))))) : (min((((/* implicit */long long int) (short)5877)), (-5793535547359967244LL)))))));
                var_22 = ((/* implicit */int) (unsigned char)0);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    var_23 = ((/* implicit */long long int) (~(((/* implicit */int) (short)-19926))));
                    var_24 = ((/* implicit */unsigned long long int) 5207730997708586790LL);
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        arr_19 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) ? (5208004504760519258LL) : (-19LL)));
                        var_25 |= (-(0U));
                    }
                }
                var_26 |= ((/* implicit */short) min((min((min((12347925544712156576ULL), (((/* implicit */unsigned long long int) 1652588911)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)25))))))), (((((/* implicit */_Bool) (signed char)23)) ? ((+(11461342125948546711ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-20)))))))));
            }
        } 
    } 
    var_27 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)25))))) ? (31ULL) : (((((/* implicit */_Bool) (short)5894)) ? (2251662374731776ULL) : (((/* implicit */unsigned long long int) 1868675628U))))))));
    var_28 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_17))))), ((~(-894359521811592211LL)))));
    var_29 |= ((/* implicit */unsigned int) (+(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) (short)5878))))), (((((/* implicit */_Bool) 752803289)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)32))) : (2199023254528ULL)))))));
}
