/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114913
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
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (((~(max((3479986275U), (((/* implicit */unsigned int) -723073604)))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0])) && (((/* implicit */_Bool) arr_4 [i_0]))))))));
                var_14 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) 723073604)) + (arr_2 [i_0])))))) * (((unsigned long long int) arr_1 [i_0]))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) 723073627)), (26878553U)));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        var_15 -= ((/* implicit */unsigned int) (((+(((/* implicit */int) var_0)))) * ((+(((/* implicit */int) var_8))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_3 = 2; i_3 < 13; i_3 += 3) 
        {
            var_16 = ((/* implicit */long long int) ((((/* implicit */int) var_7)) < (((/* implicit */int) var_0))));
            var_17 = ((/* implicit */short) (+(arr_0 [i_2] [i_3 - 1])));
            /* LoopSeq 1 */
            for (int i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                arr_14 [i_4] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (((4268088743U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
                var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) 576460750155939840LL))) ? ((+(((/* implicit */int) arr_1 [i_4])))) : (((/* implicit */int) arr_1 [i_3]))));
            }
            var_19 -= ((((/* implicit */_Bool) arr_4 [i_3 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3 + 2]))) : (20663982U));
        }
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            for (int i_6 = 0; i_6 < 15; i_6 += 2) 
            {
                {
                    var_20 -= ((/* implicit */short) ((((long long int) arr_1 [i_2])) | (((/* implicit */long long int) ((unsigned int) var_0)))));
                    var_21 &= ((/* implicit */unsigned short) 4268088743U);
                }
            } 
        } 
    }
    var_22 = ((/* implicit */short) (_Bool)0);
    var_23 = ((/* implicit */short) var_11);
}
