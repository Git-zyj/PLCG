/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179324
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
    var_19 = ((/* implicit */unsigned long long int) min((((-7192120544730240272LL) - (((/* implicit */long long int) ((/* implicit */int) (short)31680))))), (((/* implicit */long long int) var_3))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_20 *= ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) min(((short)-31681), ((short)-31660)))), (var_4))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
                                var_21 = ((/* implicit */unsigned long long int) arr_8 [i_0] [(_Bool)1] [(_Bool)1]);
                                var_22 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max((arr_1 [i_4]), (((/* implicit */short) arr_8 [i_0] [i_1] [i_1])))))) / (max((var_13), (((/* implicit */long long int) (_Bool)0))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4 + 1] [i_1] [i_4] [i_4] [i_1] [i_2]))) + (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_4 [i_4 - 1] [i_4 - 1]), (((/* implicit */signed char) var_14))))))));
                                var_23 = ((/* implicit */short) (_Bool)1);
                                var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 7192120544730240289LL)) / (3210588023291230374ULL)));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned char) arr_2 [i_0] [i_2]);
                    var_26 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((unsigned char) var_16)), (((/* implicit */unsigned char) var_16))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) ((((((/* implicit */_Bool) 3210588023291230395ULL)) ? (((/* implicit */int) arr_7 [i_0] [i_1])) : (var_2))) >= (var_2))))));
                    var_27 = ((/* implicit */signed char) ((unsigned int) (-(((/* implicit */int) arr_4 [i_1] [0U])))));
                    var_28 = ((/* implicit */int) 776007916U);
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            for (unsigned int i_6 = 0; i_6 < 24; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    {
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) 0LL))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_6] [i_7])))))));
                        /* LoopSeq 3 */
                        for (long long int i_8 = 4; i_8 < 21; i_8 += 2) 
                        {
                            var_30 = ((/* implicit */_Bool) 15236156050418321257ULL);
                            var_31 *= ((/* implicit */unsigned long long int) min((((15236156050418321221ULL) >= (((/* implicit */unsigned long long int) var_15)))), (((((((/* implicit */_Bool) -6063508085217206144LL)) ? (15236156050418321226ULL) : (((/* implicit */unsigned long long int) -2512713528091925195LL)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_7])))))));
                            var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((signed char) ((unsigned long long int) (((_Bool)0) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-119)))))))));
                        }
                        for (long long int i_9 = 0; i_9 < 24; i_9 += 1) /* same iter space */
                        {
                            var_33 &= ((/* implicit */unsigned int) ((signed char) max((((/* implicit */unsigned long long int) (+(1044480U)))), ((((_Bool)0) ? (15236156050418321256ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
                            var_34 = ((/* implicit */_Bool) ((((long long int) 2512713528091925195LL)) << (((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]) - (1499038275U)))));
                        }
                        for (long long int i_10 = 0; i_10 < 24; i_10 += 1) /* same iter space */
                        {
                            var_35 = ((/* implicit */short) min((((signed char) ((unsigned long long int) -2512713528091925195LL))), (max((arr_16 [i_7] [i_6] [i_5]), (arr_19 [i_0] [i_6] [i_7] [i_10])))));
                            var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) ((_Bool) max((max((3210588023291230340ULL), (18446744073709551615ULL))), (var_4)))))));
                            var_37 *= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_8 [i_0] [i_5] [i_7])), (((((/* implicit */int) arr_28 [i_0] [i_5] [i_6] [i_7] [i_10])) ^ (((/* implicit */int) var_18))))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)31680)), (4293922793U))))));
                        }
                        var_38 = ((/* implicit */signed char) (+(arr_29 [i_7] [i_5] [i_6] [i_5] [(short)1] [(short)1] [i_0])));
                    }
                } 
            } 
        } 
        var_39 = ((/* implicit */long long int) max((((((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0])) >> (((((int) var_6)) + (1570577565))))), (max((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_16))))), ((+(((/* implicit */int) var_1))))))));
        var_40 = ((/* implicit */long long int) min(((+(((var_15) * (var_6))))), (var_15)));
    }
    for (signed char i_11 = 0; i_11 < 23; i_11 += 2) 
    {
        var_41 = ((/* implicit */long long int) arr_33 [(signed char)21] [(signed char)21]);
        var_42 ^= ((/* implicit */signed char) 513562025632964706ULL);
    }
}
