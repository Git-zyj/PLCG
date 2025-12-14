/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176486
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)26885)) << (((((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_4])) + (22662)))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((arr_4 [i_0] [i_0] [i_0] [20]) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41845)))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [(unsigned short)19] [i_2] [i_3]))) == (var_0)))))) : (((((((/* implicit */_Bool) (unsigned char)76)) ? (((/* implicit */int) var_7)) : (1024520223))) * (((/* implicit */int) ((signed char) arr_11 [i_0] [i_0] [i_0])))))));
                                arr_13 [i_4] [i_0] [i_0] [8] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) -8709844767288884661LL)))) ? (((/* implicit */int) arr_9 [(_Bool)1] [i_1] [i_1] [(unsigned char)21])) : (((/* implicit */int) var_5))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 4 */
                for (signed char i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        for (int i_7 = 2; i_7 < 23; i_7 += 4) 
                        {
                            {
                                arr_20 [i_0] [i_5] [i_5] [i_6] [i_7] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (var_8)))) < (10078196066310683977ULL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1 - 3] [i_7 + 1] [i_7 - 2])))))));
                                arr_21 [i_0] [i_5] [i_0] = ((/* implicit */unsigned long long int) (~(1760503981U)));
                                var_11 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(-7454641570601798859LL)))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (short)-16227)))))) : (((/* implicit */int) var_9))));
                                arr_22 [i_0] [i_5] [i_5] [i_1] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)46190))) - (var_3)))) ? (((/* implicit */int) ((signed char) var_5))) : (((/* implicit */int) max((((/* implicit */short) var_9)), (arr_16 [17ULL] [i_1] [i_1])))))));
                            }
                        } 
                    } 
                    var_12 &= ((/* implicit */unsigned char) ((4437156606760910056LL) ^ (((/* implicit */long long int) ((/* implicit */int) min((min((((/* implicit */short) (signed char)118)), ((short)-4694))), (max((((/* implicit */short) (signed char)5)), (var_5)))))))));
                    var_13 = ((/* implicit */unsigned char) 15257981030981339839ULL);
                }
                for (signed char i_8 = 0; i_8 < 24; i_8 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 2; i_9 < 21; i_9 += 2) 
                    {
                        for (long long int i_10 = 0; i_10 < 24; i_10 += 2) 
                        {
                            {
                                arr_32 [i_0] [i_0] [i_8] [i_9] [i_8] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15979801630666030327ULL)) ? (arr_27 [i_9] [i_1 - 1] [i_0] [(signed char)19]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [(signed char)22] [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_28 [i_1] [i_9] [i_10])));
                                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) var_2))));
                            }
                        } 
                    } 
                    var_15 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) min((((/* implicit */int) min(((short)-32766), ((short)-24372)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_1 - 2] [i_1])) : (((/* implicit */int) (_Bool)1))))))) : ((((~(arr_24 [(_Bool)1] [(_Bool)1] [i_1 - 2]))) & (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)14164)) : (((/* implicit */int) (_Bool)1)))))))));
                }
                for (unsigned char i_11 = 0; i_11 < 24; i_11 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 2; i_12 < 21; i_12 += 2) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_12])) ? (((int) min((((/* implicit */unsigned int) var_7)), (arr_4 [i_13] [i_13] [(unsigned short)20] [i_13])))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-99)) || (((/* implicit */_Bool) 9223372036854775807LL)))))));
                                var_17 = ((/* implicit */signed char) -8324446815274667061LL);
                                var_18 ^= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)6))) / (238588574U)))) + (max((((/* implicit */long long int) (unsigned short)26517)), (arr_31 [4] [3LL] [i_12 + 3])))));
                                var_19 ^= ((/* implicit */long long int) ((1412318446) >> (((226090078U) - (226090058U)))));
                                var_20 += ((/* implicit */signed char) ((((unsigned long long int) arr_14 [i_1 - 2] [i_1] [10U] [i_1])) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_1 - 2] [i_12])) ? (((/* implicit */int) arr_38 [i_1 + 1] [i_12])) : (((/* implicit */int) arr_16 [i_1 - 4] [i_11] [i_11])))))));
                            }
                        } 
                    } 
                    var_21 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)28))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-6542)) ? (arr_27 [i_0] [i_0] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) ((signed char) -5793246211527972480LL))) : (((/* implicit */int) ((((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [i_1])) > (((/* implicit */int) (signed char)-4))))))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)10145))) ^ (216505811646326382LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 9126899791682299866ULL))))) : (-1)))));
                    arr_41 [(unsigned short)4] [i_11] [i_1] [i_0] = ((/* implicit */signed char) ((unsigned char) ((-3314092673421206205LL) - (((/* implicit */long long int) ((((/* implicit */int) var_9)) * (0)))))));
                }
                for (signed char i_14 = 0; i_14 < 24; i_14 += 4) 
                {
                    arr_44 [i_0] [i_1] = ((/* implicit */signed char) ((((var_8) <= (((((/* implicit */int) (signed char)74)) * (((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_14] [i_14] [(_Bool)1] [i_1 - 1] [(_Bool)1] [(_Bool)1]))) | (((((/* implicit */long long int) ((/* implicit */int) var_7))) ^ (arr_12 [i_1] [i_1] [i_0] [i_1] [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) (signed char)110)) & (((/* implicit */int) var_7)))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_15 = 0; i_15 < 24; i_15 += 2) 
                    {
                        var_22 &= ((/* implicit */int) ((signed char) ((_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))));
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) arr_34 [i_0] [(unsigned char)8] [i_0]))));
                    }
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((7151774423600877716ULL) < (((/* implicit */unsigned long long int) 151657723U)))))));
                    /* LoopNest 2 */
                    for (signed char i_16 = 0; i_16 < 24; i_16 += 2) 
                    {
                        for (short i_17 = 0; i_17 < 24; i_17 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */_Bool) var_9);
                                var_26 = ((/* implicit */long long int) ((unsigned long long int) arr_24 [i_14] [i_1] [(unsigned short)5]));
                                var_27 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])) < (arr_47 [i_0] [i_0])))), (var_1)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2840530046U)) ? (1) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_38 [i_0] [i_16]))))))) : (var_1)));
                                arr_52 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_1);
                            }
                        } 
                    } 
                    var_28 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 2669511410U)) != (18446744073709551615ULL)));
                }
            }
        } 
    } 
    var_29 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)23)) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-32762))) % (4294967295U))))));
    var_30 = ((/* implicit */unsigned short) (+(((int) var_4))));
    var_31 = ((/* implicit */unsigned char) var_1);
}
