/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159305
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -1451766892))));
                /* LoopSeq 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    var_13 = ((/* implicit */unsigned long long int) ((1451766892) | (((((/* implicit */_Bool) 1451766894)) ? (((/* implicit */int) (unsigned char)181)) : (((/* implicit */int) (signed char)33))))));
                    arr_7 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (unsigned char)55)) : (((/* implicit */int) (signed char)-11))));
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        arr_10 [i_3] [i_0] [i_0] |= ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-48)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-10752))) : (7805467445243839241LL)))))))));
                        arr_11 [i_3] [i_2] [i_1] [(unsigned char)13] |= var_5;
                    }
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        var_14 = ((/* implicit */unsigned short) (((~(-1612997475794419383LL))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_1] [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                        arr_14 [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) (-(128669103717346611ULL)));
                        arr_15 [i_0] [i_2] [(unsigned short)7] [i_4] |= ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (signed char)33)) : (((/* implicit */int) (unsigned char)158))));
                        var_15 = ((/* implicit */signed char) ((398948740) | (((/* implicit */int) (unsigned char)136))));
                    }
                }
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    arr_19 [i_5] = ((/* implicit */short) arr_9 [i_0] [i_0] [i_0] [i_1] [i_5]);
                    var_16 |= ((/* implicit */long long int) ((17955278952624990543ULL) & (((/* implicit */unsigned long long int) 6483158688340645200LL))));
                }
                /* vectorizable */
                for (signed char i_6 = 0; i_6 < 17; i_6 += 2) 
                {
                    var_17 |= ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)75)) - (((/* implicit */int) (unsigned short)44302)))) / (((/* implicit */int) var_10))));
                    arr_22 [i_0] [i_0] = ((/* implicit */long long int) var_0);
                    var_18 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)20546))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1759406237)) ? (((/* implicit */int) (short)715)) : (((/* implicit */int) (signed char)74))));
                    arr_23 [i_0] [i_0] |= ((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]);
                }
                var_20 |= ((/* implicit */unsigned char) max(((short)-24027), (((/* implicit */short) (signed char)108))));
                arr_24 [i_0] = ((/* implicit */short) (unsigned char)184);
            }
        } 
    } 
    var_21 |= ((/* implicit */short) var_12);
}
