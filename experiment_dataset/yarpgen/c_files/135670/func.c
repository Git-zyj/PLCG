/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135670
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            {
                arr_4 [i_0] = max((arr_3 [i_1 + 1]), (((/* implicit */int) ((unsigned short) (_Bool)1))));
                var_14 *= ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_0] [7])) : (-1583598696)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -7683614586568998973LL)) ? (((/* implicit */int) (unsigned short)61498)) : (((/* implicit */int) (unsigned char)135))))))))));
                arr_5 [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 4762505542184596553ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50204))) : (var_9)))))) || (((((/* implicit */int) var_7)) <= (((/* implicit */int) ((((/* implicit */_Bool) 740581083)) || (((/* implicit */_Bool) 4632718454448244738ULL)))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 1; i_4 < 12; i_4 += 2) 
                            {
                                var_15 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15301)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)122))) : (4294967295U)))) ? (((/* implicit */unsigned int) (((-(((/* implicit */int) (unsigned short)10802)))) / (var_0)))) : (((((/* implicit */unsigned int) ((-740581083) / (((/* implicit */int) arr_12 [i_1] [4] [0] [i_3] [4ULL]))))) % ((~(1555261720U)))))));
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_3] [i_4])) ? (((/* implicit */long long int) ((740581083) / (((/* implicit */int) max((var_13), ((unsigned short)17021))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65529)) ? (((/* implicit */int) (unsigned short)15332)) : (((/* implicit */int) var_12))))) ? (var_9) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)24)) / (740581081))))))));
                            }
                            arr_14 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */short) var_4);
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */int) var_9);
    var_18 += ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (1555261692U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-15316)))))))) ? (var_10) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)50204))))) ? (((/* implicit */int) var_12)) : (0))))));
}
