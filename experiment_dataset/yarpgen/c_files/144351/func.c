/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144351
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
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            var_12 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5542641188809947117LL)) ? (-5542641188809947141LL) : (((/* implicit */long long int) ((/* implicit */int) (short)9593)))))) ? (((/* implicit */int) ((unsigned char) (unsigned short)32767))) : ((+(-1832414181)))));
            var_13 = ((/* implicit */unsigned char) ((unsigned long long int) (signed char)-116));
            var_14 = ((/* implicit */long long int) (((!((_Bool)1))) ? (((4294967295U) % (4294967275U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)115)))));
        }
        for (int i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (unsigned short)32769))));
            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967295U)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned int i_4 = 1; i_4 < 17; i_4 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            arr_15 [(unsigned short)2] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1832414165)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-9864))));
                            var_17 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23008))) : (0U)));
                            arr_16 [i_0] [(short)6] [i_3] [i_4] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) 5639938873991045279ULL)))));
                        }
                        arr_17 [17] [i_2] [i_3] = ((/* implicit */_Bool) ((1U) - (((/* implicit */unsigned int) (~(1832414180))))));
                        var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65409)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        arr_18 [i_0 - 3] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (11U) : (4294967295U)));
                        var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) * (7315762811907691880ULL)));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned int i_6 = 0; i_6 < 19; i_6 += 1) 
            {
                var_20 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) -5180382820922872818LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)960))) >= (11130981261801859736ULL))))) : (11U)));
                var_21 = ((/* implicit */short) ((((/* implicit */int) (signed char)-70)) / (-1832414180)));
            }
        }
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) -5103468616244422397LL))));
        arr_21 [i_0] = ((((/* implicit */_Bool) (unsigned short)58263)) && (((/* implicit */_Bool) (unsigned char)212)));
        arr_22 [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned short) (~(-215216483)));
    }
    var_23 = ((/* implicit */_Bool) ((((/* implicit */int) var_2)) >> (((((max((11130981261801859736ULL), (((/* implicit */unsigned long long int) (unsigned short)8191)))) ^ (7315762811907691880ULL))) - (18446744073709551576ULL)))));
}
