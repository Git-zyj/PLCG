/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158231
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) min((arr_0 [i_0]), (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) & (arr_0 [i_0]))) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0)))))))));
        arr_3 [i_0] = ((/* implicit */short) max((min((arr_0 [i_0 + 1]), (((/* implicit */long long int) 986358109)))), (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127))))))))));
        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (-(max((((/* implicit */int) (unsigned short)8540)), (-1956617788))))))));
        var_14 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) ((_Bool) (unsigned short)49893))) * (((/* implicit */int) ((signed char) arr_0 [i_0])))))), ((-(var_4)))));
    }
    for (int i_1 = 0; i_1 < 20; i_1 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */short) var_8);
        var_16 = ((/* implicit */unsigned long long int) var_11);
    }
    for (int i_2 = 0; i_2 < 20; i_2 += 2) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) (unsigned char)200)) : (986358109))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                {
                    var_17 = ((/* implicit */int) (!((_Bool)1)));
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) arr_13 [5ULL] [i_4]))));
                    /* LoopSeq 3 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_2] [i_2] [i_2] [i_4] [(signed char)9] [(signed char)9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min(((~(-986358110))), (((/* implicit */int) var_5)))))));
                        arr_19 [i_5] [i_4] [(unsigned short)4] [i_2] = ((/* implicit */_Bool) var_10);
                    }
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        arr_22 [i_6] [i_6] = ((/* implicit */long long int) ((_Bool) ((_Bool) (unsigned short)10147)));
                        var_19 ^= ((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [i_2] [i_4] [i_4] [i_3] [i_3] [i_2]))));
                        var_20 = ((((var_1) ^ (((/* implicit */int) var_3)))) / (((/* implicit */int) arr_10 [(unsigned short)11] [(unsigned char)2] [i_4])));
                        var_21 *= ((/* implicit */unsigned short) (short)27804);
                        var_22 = ((/* implicit */signed char) ((arr_16 [i_2] [i_3] [i_4] [i_6] [i_6]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2])))));
                    }
                    /* vectorizable */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (signed char i_8 = 1; i_8 < 17; i_8 += 4) /* same iter space */
                        {
                            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (signed char)20))));
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) var_2))));
                        }
                        for (signed char i_9 = 1; i_9 < 17; i_9 += 4) /* same iter space */
                        {
                            arr_32 [i_9] [i_7] = ((unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_2] [(_Bool)1] [i_2] [7] [7] [(unsigned char)19])) ? (((/* implicit */int) (unsigned char)138)) : (((/* implicit */int) var_0))));
                            arr_33 [i_9] = ((/* implicit */unsigned int) (~(var_2)));
                            arr_34 [i_2] [i_9] [i_3] [i_4] [1] [i_4] [i_4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)79))));
                            var_25 = ((/* implicit */_Bool) (signed char)-112);
                            arr_35 [i_9] [i_7] [i_4] [(unsigned short)5] [i_9] = ((/* implicit */unsigned char) (+(((-762385303) % (((/* implicit */int) (signed char)-60))))));
                        }
                        for (signed char i_10 = 1; i_10 < 17; i_10 += 4) /* same iter space */
                        {
                            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_4] [i_10 + 3] [i_10] [i_10] [(unsigned short)2])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_23 [(_Bool)1] [i_7] [(_Bool)1] [i_3] [i_2]))))) : ((~(4194419788702950017ULL))))))));
                            var_27 = ((/* implicit */_Bool) (+(arr_28 [6ULL] [i_3] [i_4] [i_7] [i_7] [i_7] [i_10 + 3])));
                        }
                        var_28 = ((/* implicit */short) (signed char)-66);
                        var_29 = ((/* implicit */signed char) ((((var_9) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32500))))) ? (((((/* implicit */_Bool) (short)-5212)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-60))) : (var_9))) : (((/* implicit */unsigned long long int) var_6))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 1; i_11 < 18; i_11 += 4) 
                    {
                        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((/* implicit */_Bool) -413386733509842106LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) max(((short)6144), ((short)-12591)))) + ((-(((/* implicit */int) var_7))))))) : (((((/* implicit */_Bool) 1147525204)) ? (((/* implicit */unsigned long long int) 140735340871680LL)) : (4194419788702950017ULL))))))));
                        var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_27 [i_2] [i_2] [i_2] [i_11 + 2] [i_11 + 2])) ? (((/* implicit */int) arr_37 [i_11 - 1] [i_2] [i_4] [i_11 + 2])) : (((/* implicit */int) (unsigned short)1023)))) << (((/* implicit */int) ((_Bool) var_6))))))));
                    }
                    arr_40 [i_2] [i_2] [i_3] [i_2] = ((/* implicit */unsigned int) max((max(((unsigned char)97), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) -762385303))))))), (arr_4 [i_4])));
                }
            } 
        } 
        var_32 = ((/* implicit */long long int) max((arr_5 [i_2]), (((/* implicit */unsigned long long int) arr_30 [i_2] [i_2]))));
        var_33 = ((/* implicit */int) max((var_33), ((~(((/* implicit */int) ((((/* implicit */long long int) 2328564174U)) <= (1716069027350818195LL))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_12 = 0; i_12 < 20; i_12 += 3) 
        {
            var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)20281)) ? (((/* implicit */int) arr_30 [i_2] [i_12])) : (((/* implicit */int) arr_30 [i_2] [i_12])))))));
            arr_45 [i_12] [(_Bool)1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_42 [(signed char)13] [i_12] [i_12])) ? ((-(((/* implicit */int) arr_20 [i_2] [i_12] [i_2])))) : (((/* implicit */int) arr_14 [i_2] [i_2]))));
            arr_46 [i_2] [i_12] [i_12] = ((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_2] [i_2] [11] [i_2] [i_2] [i_2])) + (((/* implicit */int) arr_17 [i_2] [i_12] [i_2] [19U] [i_2] [i_12]))));
            arr_47 [i_2] [i_2] [i_12] = ((/* implicit */unsigned short) ((arr_39 [i_12] [16ULL] [i_2] [i_2] [i_2]) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)117))))))));
        }
    }
    var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)147)) > (((/* implicit */int) (signed char)-26))))) - (((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) var_11)))))))))));
}
