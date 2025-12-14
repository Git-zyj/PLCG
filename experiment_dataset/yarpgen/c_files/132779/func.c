/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132779
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */long long int) var_11)) == (min((((((/* implicit */_Bool) (signed char)127)) ? (7281734362239432LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-20897))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_14)))))))));
    var_16 = ((/* implicit */unsigned int) ((unsigned long long int) var_13));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = var_11;
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            arr_10 [(unsigned char)16] [i_2] [i_2] [i_0] = ((/* implicit */int) (~((-(arr_0 [i_0 - 2])))));
                            var_17 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((unsigned short) arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))), (((((/* implicit */_Bool) (~(-1048436266)))) ? (arr_6 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-15143)))))))));
                            var_18 *= ((/* implicit */unsigned int) ((unsigned long long int) ((((var_5) || (var_3))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 2]))) : (281189880764441983ULL))));
                            var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2] [14U] [i_0 + 1] [14U] [1U] [i_2])))))) <= ((~(3569800831U)))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */short) (-(-123712320)));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_4 = 1; i_4 < 19; i_4 += 3) 
    {
        arr_14 [i_4] = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)-29700))));
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((unsigned short) arr_12 [i_4 - 1])))));
        var_22 += ((/* implicit */long long int) (+(-123712320)));
    }
}
