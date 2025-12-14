/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142057
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */short) min(((unsigned short)0), ((unsigned short)35519)));
        arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_1 [i_0]), (arr_3 [4U] [i_0])))) ? ((+(4294967295U))) : (((/* implicit */unsigned int) (+(-1884761660))))));
    }
    var_14 |= ((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) var_3)))));
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 15; i_1 += 2) 
    {
        for (int i_2 = 2; i_2 < 15; i_2 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_3 = 4; i_3 < 15; i_3 += 4) 
                {
                    for (long long int i_4 = 2; i_4 < 12; i_4 += 4) 
                    {
                        {
                            arr_16 [i_1] [i_1] [i_2] [i_4] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) 11150067524143599488ULL)) ? (arr_15 [i_3 - 1] [i_3] [i_2 + 1] [i_1 + 1]) : (arr_15 [i_3 - 3] [i_3 - 4] [i_2 + 1] [i_1 - 2]))));
                            arr_17 [i_2] [i_2] [i_2] [i_2] [i_2 + 1] = ((/* implicit */int) ((_Bool) ((_Bool) arr_9 [i_1 + 1] [i_1 - 2] [i_1 + 1])));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    arr_21 [i_1] [i_2 - 2] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (4503599627370495ULL) : (18442240474082181116ULL)));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 1; i_6 < 14; i_6 += 2) 
                    {
                        for (int i_7 = 0; i_7 < 16; i_7 += 4) 
                        {
                            {
                                arr_27 [i_7] [6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) - (2981699564553179533ULL)));
                                arr_28 [i_1] [i_2 + 1] [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) (_Bool)1))) ^ (((/* implicit */int) max(((unsigned char)79), (((/* implicit */unsigned char) (_Bool)1)))))));
                            }
                        } 
                    } 
                }
                arr_29 [i_1] [i_2 - 1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0U)) ? (((unsigned int) (+(((/* implicit */int) (_Bool)1))))) : (var_13)));
            }
        } 
    } 
}
