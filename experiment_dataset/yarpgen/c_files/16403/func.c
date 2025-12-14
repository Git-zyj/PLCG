/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16403
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0 - 1] [i_0])) ^ (((/* implicit */int) arr_5 [i_0 - 1] [i_1]))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (int i_4 = 1; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) arr_4 [i_0 - 1]);
                                var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-27)) ? (18210049052947196488ULL) : (18210049052947196465ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (arr_11 [i_0] [12LL] [i_0 - 1] [12LL] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)123))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */long long int) ((signed char) arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1]));
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) 18210049052947196486ULL))));
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (236695020762355155ULL)));
                }
            } 
        } 
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) 0))));
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            for (unsigned char i_6 = 1; i_6 < 17; i_6 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 1; i_7 < 15; i_7 += 3) 
                    {
                        arr_20 [i_6] [i_0] [i_5] [i_6] = ((/* implicit */_Bool) (signed char)-8);
                        arr_21 [i_6] [i_5] [i_6] [i_5] [i_0] [i_6] = ((/* implicit */short) ((2989336578U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_6 + 1] [(signed char)10])))));
                        var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)43327))));
                        arr_22 [i_0] [i_0] [i_0 - 1] [i_6] [i_6] [5ULL] = (((!(((/* implicit */_Bool) (unsigned char)197)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)61))) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)44))) : (2803341486U))));
                    }
                    arr_23 [i_0] [i_0] [i_6] [i_6] = ((/* implicit */unsigned char) arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1]);
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)197))))) >> (((arr_11 [i_0] [i_0 - 1] [i_0 - 1] [i_6 - 1] [i_0 - 1] [i_6 - 1] [i_0 - 1]) - (2889005959U)))));
                    arr_24 [i_6] [12LL] [i_6] = ((/* implicit */_Bool) (signed char)127);
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 1) 
        {
            arr_27 [i_0 - 1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))));
            /* LoopSeq 1 */
            for (unsigned short i_9 = 0; i_9 < 18; i_9 += 1) 
            {
                var_25 = ((/* implicit */long long int) (((-(((/* implicit */int) (_Bool)0)))) - (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1]))));
                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_9] [i_8] [i_0]))) == (8796093022207LL))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_9] [i_8] [i_8] [i_0])) && (((/* implicit */_Bool) 18210049052947196480ULL))))))))));
            }
            var_27 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_26 [i_8] [i_8])) ? (((/* implicit */int) arr_25 [i_8])) : (((/* implicit */int) (unsigned short)1))))));
        }
        for (signed char i_10 = 1; i_10 < 16; i_10 += 4) 
        {
            arr_34 [i_10] = ((/* implicit */signed char) (-(((/* implicit */int) arr_30 [i_0 - 1] [i_10] [i_10]))));
            var_28 = ((/* implicit */short) ((arr_17 [i_0 - 1] [i_10 + 2]) != (((/* implicit */int) (signed char)-1))));
        }
    }
    var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((((/* implicit */int) var_6)) ^ ((~(((/* implicit */int) max(((unsigned short)65528), (((/* implicit */unsigned short) (signed char)(-127 - 1)))))))))))));
    var_30 = ((/* implicit */_Bool) var_2);
    /* LoopSeq 2 */
    for (signed char i_11 = 2; i_11 < 20; i_11 += 2) 
    {
        var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) 2863715840U)))) && (((/* implicit */_Bool) ((unsigned short) arr_36 [i_11 + 1] [i_11 - 1]))))))));
        arr_38 [i_11] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_36 [i_11] [i_11])) && (((((/* implicit */_Bool) 4252310116U)) || ((_Bool)1))))) ? (((arr_37 [i_11 - 1] [i_11 - 1]) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)71))))) : (((/* implicit */unsigned int) max((((((/* implicit */int) (short)11806)) % (((/* implicit */int) (short)-11806)))), (((/* implicit */int) (short)32740)))))));
        var_32 = ((/* implicit */unsigned long long int) max((var_32), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_35 [i_11 - 2])) >> (((1196493148U) - (1196493126U)))))), (((7411695190945505147ULL) >> (((((/* implicit */int) arr_35 [i_11 - 2])) - (143)))))))));
        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) (short)11806))));
        var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_35 [i_11 - 1])) != (((/* implicit */int) arr_35 [i_11 - 1]))))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (9222347912209022668ULL))))))));
    }
    for (long long int i_12 = 0; i_12 < 10; i_12 += 1) 
    {
        var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(17461315706821356616ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_9 [i_12] [i_12] [i_12] [i_12]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_12] [i_12] [i_12]))))) : (((/* implicit */int) arr_29 [8U] [i_12] [i_12]))))) : (((((/* implicit */long long int) (+(((/* implicit */int) (short)11822))))) | (6197426381471988623LL))))))));
        var_36 = ((/* implicit */unsigned char) (((+((+(18210049052947196486ULL))))) * (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_12] [i_12] [i_12])) * (((/* implicit */int) arr_19 [i_12] [i_12] [i_12] [i_12] [i_12]))))), (((((/* implicit */_Bool) arr_36 [i_12] [i_12])) ? (arr_28 [i_12]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)24))))))))));
        var_37 = ((/* implicit */unsigned short) ((((((-1005973066) <= (((/* implicit */int) (_Bool)1)))) ? (arr_12 [i_12] [i_12] [i_12]) : (((/* implicit */int) (_Bool)1)))) >> ((((+(((/* implicit */int) ((short) arr_16 [i_12] [i_12] [(signed char)2]))))) - (34)))));
    }
}
