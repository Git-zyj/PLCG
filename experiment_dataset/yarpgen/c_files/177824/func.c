/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177824
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
    var_19 += (unsigned short)19664;
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_20 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned char) arr_1 [(unsigned char)1]))))) ? (var_5) : (((((/* implicit */int) (unsigned char)132)) ^ (((/* implicit */int) (_Bool)1))))))) ? ((~(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) (((~(((/* implicit */int) (unsigned char)132)))) > (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)124))))))))));
        /* LoopSeq 4 */
        for (short i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                for (short i_3 = 1; i_3 < 13; i_3 += 4) 
                {
                    {
                        var_21 += ((/* implicit */short) (!(((/* implicit */_Bool) var_8))));
                        var_22 = (!(((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) (_Bool)1)), (11953067508240737544ULL)))))));
                        arr_8 [i_0] [i_1] [i_1 - 1] [i_2 + 1] [i_3] [9] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
            arr_9 [i_0] [i_1] = ((/* implicit */_Bool) min((((int) 6493676565468814072ULL)), (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) && (((/* implicit */_Bool) min((arr_5 [i_0] [i_1] [(_Bool)0] [i_1]), (((/* implicit */long long int) (signed char)-41))))))))));
            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) var_8))));
            /* LoopNest 2 */
            for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                for (long long int i_5 = 1; i_5 < 10; i_5 += 1) 
                {
                    {
                        var_24 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((arr_2 [i_1 - 1] [i_5]) >= (((arr_2 [i_1] [i_5]) | (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1]))))))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 2) /* same iter space */
                        {
                            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) min((11953067508240737544ULL), (((/* implicit */unsigned long long int) (unsigned short)55802)))))));
                            var_26 &= ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) (unsigned short)62407)))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 14; i_7 += 2) /* same iter space */
                        {
                            var_27 = ((/* implicit */_Bool) max((max((arr_21 [i_1 - 2]), (arr_21 [i_1 - 2]))), (max((arr_21 [i_1 - 1]), (arr_21 [i_1 - 1])))));
                            arr_22 [i_5] [i_4] [(signed char)4] = ((/* implicit */_Bool) arr_18 [(unsigned char)7] [3U] [i_4] [i_5] [i_7]);
                        }
                        for (unsigned char i_8 = 0; i_8 < 14; i_8 += 2) /* same iter space */
                        {
                            arr_25 [i_0] [i_1] [i_5] [i_5] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)55805)) ? (36028797018963967LL) : (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-23)) + (2147483647))) >> (((4258879337U) - (4258879335U))))))));
                            arr_26 [9LL] [i_5] [i_1 + 1] [(unsigned short)0] [i_5] [i_8] [i_8] = ((/* implicit */_Bool) (+(((/* implicit */int) min((arr_1 [(unsigned char)10]), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)16383))))))))));
                            var_28 -= ((/* implicit */unsigned char) var_0);
                            var_29 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) -8519900558211849132LL)), (11953067508240737544ULL)));
                        }
                    }
                } 
            } 
        }
        for (signed char i_9 = 0; i_9 < 14; i_9 += 1) 
        {
            var_30 = ((/* implicit */unsigned short) (~(((((/* implicit */int) max((arr_20 [(_Bool)1] [i_9] [i_9]), (arr_23 [i_0] [i_0] [i_0] [i_9] [i_9])))) | (((/* implicit */int) ((_Bool) var_0)))))));
            arr_30 [i_9] [i_9] = ((/* implicit */int) -3163770467642913018LL);
        }
        for (long long int i_10 = 2; i_10 < 12; i_10 += 1) 
        {
            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) max((((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_10] [i_10])))))))), (arr_32 [i_0] [i_0] [i_10 + 2]))))));
            arr_33 [i_0] = ((/* implicit */short) max((min((arr_4 [i_10] [i_10 - 1] [i_10]), (((/* implicit */long long int) arr_0 [i_10 + 2] [i_10 - 1])))), (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_23 [7ULL] [i_10] [i_10] [i_10] [i_10])) >= (((/* implicit */int) var_17))))))))));
        }
        for (unsigned long long int i_11 = 2; i_11 < 13; i_11 += 4) 
        {
            var_32 = ((/* implicit */_Bool) arr_15 [i_11] [i_11]);
            arr_36 [i_0] = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_11] [i_11]);
            /* LoopSeq 1 */
            for (short i_12 = 0; i_12 < 14; i_12 += 3) 
            {
                arr_40 [2] [i_11] [i_11] [i_12] = ((/* implicit */_Bool) (+((+(3163770467642913018LL)))));
                var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) (short)-9001))) >= (476219031)));
                arr_41 [i_0] [i_0] [i_11] [(_Bool)1] = (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_17 [i_0] [i_12])) == (((/* implicit */int) (unsigned char)119))))) * (((((/* implicit */int) arr_34 [i_0] [i_11] [i_12])) / (((/* implicit */int) (short)-8995))))))));
            }
            var_34 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (arr_18 [i_0] [i_0] [7LL] [i_11] [i_11]))))));
            var_35 = ((/* implicit */signed char) ((((_Bool) max((((/* implicit */int) arr_24 [i_0] [i_0] [i_11])), (var_14)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)9006))))) : (((/* implicit */int) var_10))));
        }
        var_36 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */short) arr_0 [i_0] [i_0])), (arr_16 [i_0] [i_0] [i_0] [i_0])))) - (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) >= (1594183373417596587LL)))))))));
    }
    /* LoopNest 2 */
    for (short i_13 = 0; i_13 < 16; i_13 += 1) 
    {
        for (long long int i_14 = 1; i_14 < 12; i_14 += 1) 
        {
            {
                var_37 = ((/* implicit */long long int) (unsigned char)124);
                arr_48 [i_13] [i_13] [i_13] = ((/* implicit */unsigned int) (+(var_1)));
                var_38 = ((/* implicit */_Bool) 6751539640523148484LL);
            }
        } 
    } 
}
