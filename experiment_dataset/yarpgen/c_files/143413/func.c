/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143413
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
    var_17 = ((/* implicit */_Bool) max((var_17), ((!(((/* implicit */_Bool) var_9))))));
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) var_2))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) max(((short)11947), (((/* implicit */short) (_Bool)1)))));
        arr_3 [4ULL] [14ULL] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6144)) ? (9450918683515922315ULL) : (9450918683515922324ULL)))) || (((/* implicit */_Bool) var_15))));
        arr_4 [8LL] |= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) * (((unsigned int) ((((/* implicit */int) (signed char)-1)) ^ (var_13))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            var_19 |= ((/* implicit */short) var_1);
            arr_7 [i_0] = ((/* implicit */unsigned int) max((((8995825390193629284ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */unsigned long long int) ((var_16) > (4848273855213377415LL))))));
            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) arr_5 [i_1] [i_0]))));
            arr_8 [i_0] = ((/* implicit */long long int) var_1);
            arr_9 [i_1] [i_1] [i_1] |= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (arr_5 [i_0 - 3] [i_0 - 2]) : (arr_5 [i_0 + 1] [i_0 - 3])))), (((unsigned long long int) var_7))));
        }
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_3 = 0; i_3 < 25; i_3 += 1) /* same iter space */
            {
                arr_15 [i_3] [i_0] [i_0] [(signed char)4] = ((/* implicit */short) (!((_Bool)1)));
                var_21 = ((/* implicit */unsigned int) var_13);
                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((1839682557733605568LL) | (((/* implicit */long long int) 2490137404U)))))));
            }
            for (long long int i_4 = 0; i_4 < 25; i_4 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (short i_6 = 3; i_6 < 22; i_6 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) 12152686022998897022ULL)) && (((/* implicit */_Bool) var_9))));
                            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) 6294058050710654608ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (var_16))))));
                            arr_24 [i_0] = ((/* implicit */signed char) arr_6 [i_0]);
                        }
                    } 
                } 
                var_25 = ((/* implicit */_Bool) ((var_15) - (((/* implicit */int) var_3))));
                arr_25 [i_0] = ((/* implicit */unsigned short) (signed char)7);
            }
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 24; i_7 += 1) 
            {
                for (int i_8 = 0; i_8 < 25; i_8 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_9 = 0; i_9 < 25; i_9 += 1) 
                        {
                            arr_34 [i_8] [i_8] [i_8] [12ULL] [i_8] |= ((/* implicit */_Bool) 8995825390193629305ULL);
                            var_26 |= ((/* implicit */short) var_1);
                        }
                        arr_35 [i_8] [i_2] |= ((/* implicit */unsigned int) var_16);
                        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_6)))))))));
                    }
                } 
            } 
            var_28 = ((/* implicit */unsigned short) max((var_28), (var_7)));
        }
    }
    for (unsigned short i_10 = 2; i_10 < 10; i_10 += 1) 
    {
        arr_38 [i_10] [i_10 + 1] |= ((/* implicit */short) ((max((((/* implicit */unsigned long long int) var_15)), (max((1564163572719392859ULL), (((/* implicit */unsigned long long int) (signed char)-8)))))) - (((((/* implicit */unsigned long long int) ((unsigned int) arr_1 [6ULL]))) * (((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (18446744073709551615ULL)))))));
        var_29 |= ((/* implicit */unsigned int) min((((/* implicit */int) var_2)), (max((var_9), (((/* implicit */int) (signed char)-90))))));
        var_30 = ((/* implicit */short) var_10);
    }
    for (int i_11 = 1; i_11 < 16; i_11 += 3) 
    {
        arr_41 [5LL] [i_11] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35667))) < ((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */unsigned int) ((var_2) ? (((/* implicit */int) arr_18 [2LL])) : (((/* implicit */int) (signed char)-30))))) : (2311654078U)))));
        arr_42 [(unsigned char)17] [i_11] = ((_Bool) (!((_Bool)1)));
        /* LoopNest 2 */
        for (unsigned short i_12 = 1; i_12 < 15; i_12 += 1) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_14 = 0; i_14 < 18; i_14 += 1) 
                    {
                        for (int i_15 = 0; i_15 < 18; i_15 += 4) 
                        {
                            {
                                arr_53 [i_13] [i_13] [i_13] [i_13] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) min((18446744073709551609ULL), (((/* implicit */unsigned long long int) arr_10 [4] [i_11 - 1])))))));
                                arr_54 [i_11] [i_12] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((int) var_9)) : (((/* implicit */int) (short)27827))));
                                var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) ((var_1) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))))) / (((/* implicit */int) var_10))));
                            }
                        } 
                    } 
                    var_32 |= ((/* implicit */unsigned short) 14534928484554464195ULL);
                    var_33 |= ((/* implicit */long long int) ((var_13) == (((/* implicit */int) ((8995825390193629316ULL) <= (12152686022998897008ULL))))));
                }
            } 
        } 
        arr_55 [i_11 - 1] = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_6 [(short)0]))))));
    }
}
