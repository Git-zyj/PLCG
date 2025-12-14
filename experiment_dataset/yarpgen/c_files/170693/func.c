/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170693
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
    var_17 = ((/* implicit */unsigned char) var_1);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) var_5)) - (((unsigned int) 2512365088U))));
                var_19 = ((/* implicit */unsigned char) 1514920190);
                var_20 = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned int) arr_0 [i_0])));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (+(var_4))))));
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_6 [i_2] [(short)18] |= ((/* implicit */unsigned char) 6359787264344411131ULL);
        var_22 += ((/* implicit */unsigned int) (-((+(arr_5 [i_2])))));
        /* LoopSeq 1 */
        for (short i_3 = 1; i_3 < 21; i_3 += 2) 
        {
            var_23 = ((/* implicit */unsigned char) (!(((((15286222974464123380ULL) | (((/* implicit */unsigned long long int) arr_4 [i_2])))) == (((/* implicit */unsigned long long int) 888585373U))))));
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (((((_Bool)1) && (((/* implicit */_Bool) 13835888961711114087ULL)))) ? (((/* implicit */int) (unsigned short)25162)) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)-2048)), ((unsigned short)40374)))))))));
                arr_11 [i_2] [i_4] [i_2] = ((/* implicit */int) (~(max((((/* implicit */unsigned int) arr_8 [i_3] [i_3 - 1] [i_3])), (2683566072U)))));
                var_25 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((var_10), (((/* implicit */short) var_2))))) ? (min((var_1), (((/* implicit */unsigned long long int) (unsigned char)27)))) : (arr_5 [i_3 + 1]))), ((~(max((((/* implicit */unsigned long long int) var_6)), (arr_5 [6])))))));
            }
            var_26 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (+(((888585373U) << (((((/* implicit */int) (unsigned short)25162)) - (25139))))))))));
            var_28 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) var_1)))));
        }
    }
}
