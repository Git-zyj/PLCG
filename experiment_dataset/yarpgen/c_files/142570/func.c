/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142570
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
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (-(var_11))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 7; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) max(((unsigned short)34030), ((unsigned short)31516))))))) ? ((-(((/* implicit */int) ((unsigned char) var_8))))) : (((((/* implicit */_Bool) ((int) var_2))) ? (((var_11) | (((/* implicit */int) (unsigned short)55803)))) : ((~(((/* implicit */int) var_12))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        {
                            arr_9 [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) -1011753547))) ? (((((/* implicit */_Bool) ((int) (_Bool)0))) ? (((arr_3 [i_0] [i_0] [i_0]) & (((/* implicit */unsigned long long int) var_1)))) : (18305285372146837682ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
                            var_20 = ((/* implicit */int) (+(var_6)));
                            arr_10 [i_3] [i_3] [i_1] [i_3] [i_0] = max(((unsigned char)235), (((/* implicit */unsigned char) ((((/* implicit */int) ((var_4) && (((/* implicit */_Bool) (unsigned short)31511))))) < (((/* implicit */int) arr_6 [i_0] [i_0]))))));
                            arr_11 [i_0] [i_1] [i_1] [i_3] [i_2] [i_3] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_2 - 1] [i_3]))))) ? (((int) -135870523)) : (((/* implicit */int) var_9)))));
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) arr_1 [i_0]))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */_Bool) max(((unsigned char)20), (((/* implicit */unsigned char) (signed char)-21))));
                arr_12 [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) 16239598181697456979ULL)) ? (14547424480134354093ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-5)))))));
            }
        } 
    } 
}
