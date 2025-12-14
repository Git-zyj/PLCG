/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132598
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
    var_11 = ((((/* implicit */_Bool) (unsigned char)172)) ? (1539317085) : (((/* implicit */int) (unsigned char)162)));
    var_12 = ((/* implicit */unsigned short) var_5);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 += ((((/* implicit */_Bool) arr_3 [(unsigned char)4] [i_1])) ? (arr_4 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)162))));
                var_14 = ((/* implicit */unsigned int) (-((~(((/* implicit */int) (signed char)66))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_8 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2])) ? (((/* implicit */int) (unsigned short)11915)) : (arr_0 [i_0])))) ? (8191U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53620)))));
                    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)46)) ? (((/* implicit */int) (unsigned short)11915)) : (((/* implicit */int) (unsigned char)100))));
                    arr_9 [i_0] = ((/* implicit */unsigned long long int) var_5);
                    var_16 = (_Bool)0;
                }
                for (long long int i_3 = 3; i_3 < 17; i_3 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 2; i_5 < 17; i_5 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_3] [i_4] [i_4] [i_5 - 2] = ((/* implicit */unsigned long long int) (+(min((arr_0 [i_0]), (((/* implicit */int) (unsigned short)17866))))));
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((arr_14 [i_0] [i_5] [(unsigned short)10] [i_5 - 2] [i_0]) ^ (arr_14 [i_0] [i_5] [i_5] [i_5 - 2] [i_0])))) ^ (min((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)8645))) & (772992289935329010LL))), (min((((/* implicit */long long int) arr_7 [i_0] [i_0])), (var_7)))))));
                            }
                        } 
                    } 
                    var_18 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(751980211)))) ? ((-(((4096093066U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)84))))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_0)))))));
                }
                /* vectorizable */
                for (long long int i_6 = 3; i_6 < 17; i_6 += 3) /* same iter space */
                {
                    arr_19 [i_0] [i_0] [i_6] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 7381465714946461983ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)172))) : (8191U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    var_19 ^= ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) -772992289935329006LL)) ? (var_1) : (((/* implicit */int) var_4)))));
                    var_20 += ((/* implicit */unsigned char) ((int) (short)31342));
                    var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1174139538)) ? (((/* implicit */int) (signed char)-1)) : ((~(((/* implicit */int) arr_11 [i_1] [(unsigned char)0]))))));
                }
                for (unsigned int i_7 = 0; i_7 < 18; i_7 += 2) 
                {
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((_Bool) max((var_6), (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_7] [i_7]))) | (4294959105U)))))))));
                    /* LoopSeq 4 */
                    for (int i_8 = 1; i_8 < 17; i_8 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 0; i_9 < 18; i_9 += 1) 
                        {
                            var_23 *= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((arr_14 [i_7] [i_7] [i_8 + 1] [i_8 - 1] [i_9]) | (((/* implicit */int) min(((short)-11662), (((/* implicit */short) (unsigned char)84)))))))) ^ (max((((/* implicit */unsigned int) var_4)), ((~(arr_21 [i_7] [i_7] [i_7] [i_8])))))));
                            var_24 = ((/* implicit */unsigned int) (~((~((-2147483647 - 1))))));
                            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)172)) ? (12209818153555423721ULL) : (((/* implicit */unsigned long long int) -1))));
                            var_26 = (~(2753468028U));
                        }
                        arr_29 [i_8] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 8189U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-37))) : (-772992289935328990LL)));
                    }
                    for (unsigned char i_10 = 1; i_10 < 17; i_10 += 3) /* same iter space */
                    {
                        arr_34 [i_0] [8U] [i_10 + 1] [8U] [i_7] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-2048))));
                        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) var_8))));
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-28362)) && (((/* implicit */_Bool) (unsigned short)5901))))) | (-2147483633)));
                    }
                    for (unsigned char i_11 = 1; i_11 < 17; i_11 += 3) /* same iter space */
                    {
                        var_29 += ((/* implicit */signed char) max((((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) < ((-2147483647 - 1))))), (min(((unsigned short)8645), ((unsigned short)21687)))));
                        var_30 = ((/* implicit */int) max((((((/* implicit */_Bool) 1556959185)) ? (17998978437994054382ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) (unsigned short)56891))));
                        arr_39 [(signed char)0] [i_0] = ((/* implicit */int) (-(((((((/* implicit */_Bool) (short)-11662)) ? (arr_15 [i_0] [i_1] [i_7] [i_11]) : (((/* implicit */unsigned long long int) -1556959166)))) * (((/* implicit */unsigned long long int) min((-1657445679), (((/* implicit */int) (_Bool)1)))))))));
                        arr_40 [i_0] [i_1] [i_7] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)8634)) ? (((/* implicit */unsigned long long int) -1847871415)) : (arr_15 [i_0] [i_11 - 1] [i_7] [i_11]))) <= (((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)16)) >= (((/* implicit */int) (unsigned short)44409)))) ? (((/* implicit */int) (unsigned short)29944)) : (((/* implicit */int) (short)2047)))))));
                    }
                    for (unsigned int i_12 = 0; i_12 < 18; i_12 += 1) 
                    {
                        var_31 ^= ((/* implicit */unsigned short) arr_25 [1U] [i_7]);
                        var_32 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                        var_33 += ((/* implicit */short) min((((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8644))) != (12947148499077309237ULL))))))), (((((/* implicit */_Bool) (signed char)112)) ? (2774484039U) : (1520483256U)))));
                    }
                    arr_44 [i_7] [i_1] [i_1] [i_7] &= ((/* implicit */long long int) 5506438960522321647ULL);
                }
            }
        } 
    } 
    var_34 = ((/* implicit */unsigned long long int) 4137692720U);
}
