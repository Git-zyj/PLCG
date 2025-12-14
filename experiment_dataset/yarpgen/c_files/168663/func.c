/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168663
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (unsigned char)210);
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1590571203)) ? (arr_1 [i_0]) : (((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
    }
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_2 = 4; i_2 < 17; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    {
                        arr_13 [i_1] [i_1] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34353))) >= (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-45))))) ? (((/* implicit */unsigned long long int) -2346027254179997633LL)) : (((((/* implicit */_Bool) arr_8 [(signed char)7])) ? (0ULL) : (((/* implicit */unsigned long long int) 2147483647))))))));
                        arr_14 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned short)65520)))) ? (((/* implicit */int) arr_0 [i_2 + 1] [i_2 - 4])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2 + 2] [i_2 + 1])))))));
                    }
                } 
            } 
        } 
        arr_15 [i_1] |= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (signed char)-29))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-6276)) != (((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1] [i_1])))))) : (10007612067193580280ULL)))));
        arr_16 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) min((max((215115632875623541LL), (((/* implicit */long long int) arr_4 [i_1])))), (((/* implicit */long long int) (unsigned char)254))))) ? ((-(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)10232))) / (3110845118717866092LL))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)108)) << (((1867779364) - (1867779340))))))));
        arr_17 [(short)4] [i_1] = ((/* implicit */short) 612719648);
    }
    var_17 = ((/* implicit */unsigned int) min((((/* implicit */int) var_3)), (((((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) <= (13474210474799283885ULL)))) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) <= (14333014333686868937ULL))))))));
}
