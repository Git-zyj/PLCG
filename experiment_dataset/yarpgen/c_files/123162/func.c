/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123162
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
    for (int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            var_11 = ((/* implicit */unsigned char) (~(536870912U)));
            var_12 = ((/* implicit */int) var_4);
        }
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                {
                    var_13 ^= ((/* implicit */unsigned char) ((short) (_Bool)1));
                    /* LoopSeq 1 */
                    for (int i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) min(((signed char)-12), (((/* implicit */signed char) var_1))))), (9223372036854775807LL)))) ? (((long long int) (_Bool)1)) : (min((-7056762439282152397LL), (((/* implicit */long long int) (short)-9462))))));
                        var_15 ^= ((/* implicit */signed char) (-(var_10)));
                        arr_14 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 12406002016754509695ULL))));
                        var_16 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_3] [(unsigned char)14])) ? (max(((~(4524788162408381165LL))), (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) (short)-26065)))))))));
                    }
                    var_17 ^= ((/* implicit */unsigned long long int) arr_8 [i_3] [i_2] [i_3]);
                    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_8))));
                }
            } 
        } 
        arr_15 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0 + 1] [(signed char)3] [(short)11] [i_0])) ? (arr_11 [i_0] [i_0 + 1] [i_0] [i_0] [i_0]) : (arr_11 [i_0] [i_0 - 1] [i_0 - 1] [6] [i_0])))) ? ((-(8733666292096099124ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-1)))))));
        var_19 = ((/* implicit */int) min((var_19), (arr_7 [i_0])));
    }
    var_20 -= min((var_10), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)4095)) * (((/* implicit */int) (unsigned char)150))))) == (min((7120904152079302800ULL), (((/* implicit */unsigned long long int) (short)8710))))))));
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) ((short) var_5))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_0)), (max((((/* implicit */int) (unsigned char)3)), (131071)))))) : (3261371464141782827ULL)));
}
