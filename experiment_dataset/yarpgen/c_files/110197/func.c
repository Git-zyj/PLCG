/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110197
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_13 ^= ((/* implicit */unsigned char) var_6);
                        arr_12 [(unsigned char)1] [i_2] [3U] [i_0] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) 4112304793U)) ? (var_9) : (arr_10 [i_0] [i_2 + 1]))));
                    }
                    for (long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        arr_15 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (max((723322026U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)27453)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5))))))) : (arr_11 [i_4] [2ULL] [i_1] [i_0])));
                        arr_16 [i_0] [i_0] [i_1] [i_2] [i_4] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned int) arr_9 [i_2 + 1] [i_2])))))));
                    }
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)27469)) % (((/* implicit */int) (unsigned short)27459))));
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */unsigned int) -1145477566)) != (var_0)))) : (((((/* implicit */int) (unsigned short)27453)) % (((/* implicit */int) (short)-22171))))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (1294615441))) | (((((/* implicit */int) var_11)) >> (((((/* implicit */int) var_1)) - (58))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 25; i_7 += 1) 
                {
                    for (long long int i_8 = 1; i_8 < 23; i_8 += 3) 
                    {
                        {
                            var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((unsigned short) (unsigned char)133)), (((/* implicit */unsigned short) (signed char)122)))))) * ((+(min((((/* implicit */unsigned int) arr_18 [i_5])), (182662503U)))))));
                            arr_26 [i_6] [i_7] = ((/* implicit */long long int) max((((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_6] [i_6])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_24 [i_7] [i_8]))))) && (((/* implicit */_Bool) ((long long int) var_2)))))), (max(((short)29819), (((/* implicit */short) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_3)))))))));
                            var_17 *= ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) (~(((/* implicit */int) var_11))))), (4133054602U))) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27453))) : (8598690765907386854LL)))))))));
                        }
                    } 
                } 
                var_18 *= ((/* implicit */signed char) ((((/* implicit */int) arr_23 [i_6 + 1] [i_6 + 1] [i_6 + 1])) - (((((/* implicit */int) arr_23 [i_6 + 1] [i_6 + 1] [i_6 + 1])) + (((/* implicit */int) arr_23 [i_6 + 1] [i_6 + 1] [i_6 + 1]))))));
                arr_27 [i_5] [(unsigned char)21] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned short) var_9))) ? ((+(((/* implicit */int) (short)29819)))) : (((/* implicit */int) arr_19 [i_6 + 1])))) % (((/* implicit */int) var_1))));
                var_19 = ((((/* implicit */_Bool) ((4133054602U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)4)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (~(-1294615437)))))) : ((+((+(4112304793U))))));
            }
        } 
    } 
}
