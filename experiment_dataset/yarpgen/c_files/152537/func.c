/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152537
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
    var_17 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((long long int) (-(((/* implicit */int) var_16)))))), (((max((12276630852385308365ULL), (((/* implicit */unsigned long long int) var_6)))) * (9205357638345293824ULL)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)9)) ? (9205357638345293823ULL) : (9241386435364257794ULL)));
                    var_18 = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned short)56319)))));
                    arr_9 [i_0] [8U] [i_2] = ((/* implicit */long long int) max((((var_8) / (((/* implicit */unsigned long long int) min((((/* implicit */int) var_3)), (arr_5 [i_0] [i_1] [i_0])))))), (((/* implicit */unsigned long long int) ((int) arr_4 [i_0 - 2] [i_1 - 1])))));
                    arr_10 [i_2] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_0 - 1] [i_0 - 3]))) ? (((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? ((-(9205357638345293800ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11183))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(9241386435364257828ULL)))) ? (((/* implicit */long long int) ((int) arr_1 [i_0] [i_0]))) : (((((/* implicit */long long int) arr_1 [i_0] [i_0])) | (4356021640187554356LL))))))));
                }
            } 
        } 
        var_19 = arr_3 [i_0];
        var_20 = ((/* implicit */unsigned int) (-((~(((((/* implicit */int) arr_7 [i_0] [i_0] [i_0 + 1])) << (((((/* implicit */int) arr_3 [i_0])) - (30035)))))))));
        var_21 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)30714)), (9205357638345293804ULL)))) ? (((((/* implicit */int) (unsigned char)122)) >> (((826210864593068072ULL) - (826210864593068072ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 7410991834125558515ULL)))))))), (min((((((/* implicit */_Bool) arr_3 [i_0])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_13))))), (((/* implicit */long long int) max((((/* implicit */int) var_6)), (arr_1 [i_0] [i_0]))))))));
    }
    var_22 = ((/* implicit */unsigned long long int) var_12);
    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (+(((/* implicit */int) var_9)))))));
}
