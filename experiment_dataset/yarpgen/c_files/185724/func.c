/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185724
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
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) arr_0 [i_0]);
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    {
                        arr_13 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_3 [i_0] [i_1] [i_1]))) ? (arr_8 [i_3] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3])))))) ? (((5877740278011765067ULL) * (5877740278011765067ULL))) : (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */unsigned int) arr_1 [i_0])))))));
                        arr_14 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */int) ((short) 12569003795697786548ULL))), (((arr_0 [i_3]) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_0 [i_0]))))));
                        var_11 -= ((/* implicit */short) ((((/* implicit */_Bool) (~((((_Bool)0) ? (((/* implicit */int) (unsigned short)40105)) : (-1890638743)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_9 [i_0] [i_0] [i_0] [i_0]), (var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)4904), (((/* implicit */unsigned short) (_Bool)0)))))) : (((((/* implicit */_Bool) (unsigned char)15)) ? (2930336636U) : (arr_5 [i_0] [i_1])))))) : (((((/* implicit */_Bool) var_2)) ? (arr_6 [i_0] [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                        arr_15 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) ((arr_0 [i_0]) ? (arr_6 [i_0] [i_0] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                    }
                } 
            } 
        } 
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (short)-25293))) ? (((/* implicit */int) (short)-25293)) : (((/* implicit */int) (short)-25293))))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))) : (min((((/* implicit */unsigned long long int) var_4)), (5877740278011765072ULL))))))))));
    }
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)63379)) ? (5877740278011765072ULL) : (((/* implicit */unsigned long long int) 4011209278U))));
}
