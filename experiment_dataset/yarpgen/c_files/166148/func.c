/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166148
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
    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) max((707412305U), (3587554991U)))), (((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */long long int) 3587554991U))))))))))));
    var_12 = ((/* implicit */unsigned int) var_7);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) arr_6 [i_1] [i_1]);
                    arr_8 [i_1] = arr_3 [i_2];
                }
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_3 = 2; i_3 < 11; i_3 += 2) 
        {
            var_14 += ((((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) arr_1 [(short)7])))))) ? (arr_3 [i_3]) : (((/* implicit */unsigned long long int) ((long long int) arr_9 [i_0] [i_3] [i_3]))));
            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_5 [i_0] [i_0] [i_3 - 2]), (arr_5 [i_3] [i_3 - 2] [i_3 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-11)) || (((/* implicit */_Bool) (unsigned char)241)))))) : (((((/* implicit */_Bool) arr_6 [i_3] [i_3])) ? (arr_6 [i_3] [i_0]) : (arr_6 [i_0] [i_3])))));
        }
        for (short i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            arr_13 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((max((((/* implicit */long long int) (unsigned char)218)), (-6079957606734746200LL))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)151)))))))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_2 [8])), (var_9)))) ? (((((/* implicit */_Bool) (unsigned char)5)) ? (-4853947431582925106LL) : (var_9))) : (((/* implicit */long long int) arr_7 [i_4] [i_4] [i_4] [i_4])))) : (((/* implicit */long long int) ((/* implicit */int) ((((long long int) -1957976312)) != (((((/* implicit */_Bool) (signed char)4)) ? (arr_4 [i_4] [i_4]) : (((/* implicit */long long int) 3587554990U))))))))));
            /* LoopSeq 1 */
            for (short i_5 = 4; i_5 < 8; i_5 += 1) 
            {
                var_16 = ((/* implicit */short) (-((~(((/* implicit */int) (signed char)-11))))));
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_15 [i_0] [i_4] [i_5 + 1]), (arr_15 [i_0] [i_4] [i_5 + 4])))) ? (((unsigned int) arr_15 [i_5 + 1] [i_5 - 1] [i_5 + 2])) : (((/* implicit */unsigned int) arr_5 [i_0] [i_4] [i_4]))));
                arr_17 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-5)) ? ((-((~(-1152521914))))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_15 [i_0] [i_4] [i_5 - 1]))))));
            }
        }
        var_18 += ((/* implicit */signed char) arr_2 [i_0]);
    }
}
