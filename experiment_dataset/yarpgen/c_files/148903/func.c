/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148903
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
    var_12 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((var_8) ? (740569254) : (((/* implicit */int) (unsigned char)155))))) ? ((~(((/* implicit */int) var_10)))) : (((/* implicit */int) ((unsigned short) var_9)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [9U] [i_1] [i_0] = ((/* implicit */int) arr_2 [8]);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_1] [0U] [i_1] = 1926230910107839066LL;
                            arr_11 [i_1] [i_1] = ((/* implicit */signed char) 4294967290U);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    for (int i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        for (long long int i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            {
                                var_13 += ((/* implicit */int) (signed char)-16);
                                arr_20 [i_6] [i_5] [i_1] [i_1] [i_1 - 1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((~(((/* implicit */int) (signed char)15)))) ^ (((((/* implicit */_Bool) -740569282)) ? (-1073741824) : (((/* implicit */int) (signed char)15))))))) ? (((arr_6 [i_0] [i_0] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [(short)8] [i_5] [i_1] [i_1] [i_0]))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) -1489190188)) ? (-740569262) : (-740569231))), (((int) 4294967295U)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 15; i_7 += 3) 
    {
        for (short i_8 = 3; i_8 < 12; i_8 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_9 = 0; i_9 < 15; i_9 += 1) 
                {
                    for (signed char i_10 = 3; i_10 < 14; i_10 += 1) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) max((((((/* implicit */_Bool) max((arr_6 [i_11] [i_9] [i_9]), (((/* implicit */unsigned long long int) arr_23 [i_7] [i_7]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_11] [2] [i_8] [i_8] [i_8] [2] [2])) >> (((3617908572U) - (3617908561U)))))) : (((((/* implicit */_Bool) 1532845564)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (5093476832143754314ULL))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (short)-32637))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)6)), (-1855177641)))) : (max((((/* implicit */unsigned long long int) (unsigned char)35)), (4194189658876066134ULL))))))))));
                                var_15 -= ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)31)), (-24LL)))) ? ((-2147483647 - 1)) : (((/* implicit */int) (short)(-32767 - 1))))) < (((/* implicit */int) ((unsigned char) ((unsigned short) 677058724U))))));
                                var_16 = ((/* implicit */unsigned char) min((((/* implicit */long long int) min(((~(((/* implicit */int) (short)63)))), (((/* implicit */int) max((arr_34 [i_7]), (((/* implicit */unsigned short) (_Bool)1)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_11])) ? (3560228946U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_7] [i_8 + 3])))))) ? (5165378503848126959LL) : (((/* implicit */long long int) 734738342U))))));
                            }
                        } 
                    } 
                } 
                arr_37 [i_7] = ((/* implicit */unsigned int) min((((((/* implicit */int) (signed char)(-127 - 1))) + (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) arr_8 [i_8 - 3] [i_8 - 2] [i_7] [i_8])) + (((/* implicit */int) arr_12 [i_7] [i_7] [i_8 - 3]))))));
                arr_38 [i_8 - 3] [i_7] [9] = ((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) (signed char)28)), (-1855177641)))))))) : ((~(((arr_13 [5] [i_8] [i_8]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12841))))))));
            }
        } 
    } 
}
