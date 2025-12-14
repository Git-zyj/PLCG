/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159032
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 7; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (max((12581762279304654199ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0])) & (((/* implicit */int) arr_3 [i_1]))))))) : ((-(arr_0 [i_1 + 3])))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) var_2);
                            /* LoopSeq 2 */
                            for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) /* same iter space */
                            {
                                arr_16 [i_0] [i_1 + 1] [i_0] [i_3] [i_0] = ((/* implicit */unsigned char) arr_9 [i_0] [i_2] [i_0] [8LL]);
                                arr_17 [2] [i_1 + 2] [i_2] [2] [i_3] [(unsigned short)6] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) 4294967295U)), (5864981794404897418ULL)));
                                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) 12581762279304654199ULL)) ? (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_0])) : (max(((((_Bool)1) ? (((/* implicit */unsigned long long int) 5091491949548697805LL)) : (932581894466292156ULL))), (((/* implicit */unsigned long long int) (signed char)28))))));
                                var_20 -= ((/* implicit */unsigned int) ((int) ((arr_15 [i_4] [i_3] [i_0] [i_1 + 2] [i_1 + 2] [i_4]) > (arr_15 [i_0] [i_1 - 1] [i_2] [i_3 + 1] [i_3 + 1] [i_4]))));
                            }
                            /* vectorizable */
                            for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) /* same iter space */
                            {
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [2LL] [i_3 - 1] [i_1 - 1] [i_3] [i_5] [i_0])) ? (arr_15 [(_Bool)1] [i_3 + 1] [i_1 - 1] [(_Bool)1] [i_5] [i_0]) : (arr_15 [i_0] [i_3 + 1] [i_1 + 3] [i_3 + 1] [i_5] [i_0])));
                                var_21 = ((/* implicit */unsigned char) (signed char)(-127 - 1));
                                arr_22 [i_0] = ((/* implicit */int) (_Bool)1);
                                var_22 *= ((/* implicit */unsigned short) (unsigned char)7);
                            }
                            arr_23 [i_0] [i_0] [i_2] [4ULL] = ((/* implicit */int) (((~(((var_10) ^ (arr_8 [i_3] [i_0] [i_0] [i_0]))))) ^ (((/* implicit */unsigned long long int) var_17))));
                            arr_24 [0LL] [i_0] [i_0] = ((/* implicit */int) var_8);
                        }
                    } 
                } 
                var_23 ^= ((/* implicit */signed char) arr_11 [(signed char)7] [(signed char)7] [i_0] [i_0]);
            }
        } 
    } 
    var_24 = ((/* implicit */short) min((((unsigned long long int) ((5864981794404897404ULL) - (var_10)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9193)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60021))) : (5017744821245420582LL)))) ? (((int) (signed char)-105)) : (((/* implicit */int) (unsigned char)122)))))));
    var_25 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)18049))))) ? (((int) ((((/* implicit */_Bool) -5078590419519702337LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-7430))) : (-5091491949548697806LL)))) : (((/* implicit */int) (signed char)0))));
}
