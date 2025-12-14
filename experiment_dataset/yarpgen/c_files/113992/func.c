/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113992
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
    var_20 = (((~(var_6))) & (max((((long long int) var_18)), (((/* implicit */long long int) ((unsigned short) -769711795171608328LL))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) ((((/* implicit */int) (short)14301)) >= (((/* implicit */int) var_14))))), ((short)14301))))) ^ (((((/* implicit */_Bool) ((unsigned char) var_3))) ? (2925978795668914052ULL) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-14302)), (0)))))))))));
        var_22 = ((/* implicit */short) (-(((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (var_12))))));
        var_23 = ((/* implicit */long long int) max((var_23), ((((+(((((/* implicit */_Bool) -1)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))) & (arr_0 [(signed char)4])))));
        arr_2 [(unsigned char)19] = ((/* implicit */_Bool) min((((/* implicit */int) var_8)), ((-(((/* implicit */int) var_3))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_24 |= ((/* implicit */long long int) min((((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (unsigned char)255))))) << ((((~(((/* implicit */int) var_12)))) + (13617))))), (((/* implicit */int) ((signed char) arr_3 [i_1 - 1])))));
        arr_5 [10LL] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1 - 1])) << (0)))) ? (((/* implicit */int) ((short) arr_4 [i_1 - 1]))) : (((/* implicit */int) arr_4 [i_1 - 1]))));
    }
    for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_3 = 1; i_3 < 11; i_3 += 4) 
        {
            var_25 = ((((0) <= (((/* implicit */int) (_Bool)1)))) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)1514)) < (((/* implicit */int) (_Bool)0)))))));
            var_26 |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) / (1572599655082966225LL)));
            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3)))))));
            /* LoopNest 2 */
            for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 3) 
                {
                    {
                        arr_19 [i_2] [8LL] [8LL] = ((/* implicit */signed char) ((0LL) ^ (((/* implicit */long long int) ((int) (short)-14302)))));
                        arr_20 [i_4] [i_3 - 1] [4LL] [i_3] [12LL] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 9128896427680249264ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33032))) : (18446744073709551615ULL))) <= (((/* implicit */unsigned long long int) var_19))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_6 = 4; i_6 < 11; i_6 += 4) /* same iter space */
        {
            arr_24 [i_2] [i_2] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_0)) ? (((((/* implicit */long long int) ((/* implicit */int) var_15))) % (var_6))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_6 + 2]))))))), (((/* implicit */long long int) ((unsigned short) ((5653377053244681650ULL) + (((/* implicit */unsigned long long int) 2147483647))))))));
            arr_25 [(unsigned short)8] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 7676378530609015413LL)) ? (((/* implicit */long long int) (+(((/* implicit */int) var_17))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)127))) : (var_13)))) ? (min((arr_0 [i_2]), (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (unsigned char)24))))))))));
            var_28 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)65535)), (232832561)))) ? (((/* implicit */int) ((unsigned char) 2803031876069068874LL))) : (((/* implicit */int) var_5)))) + (((/* implicit */int) arr_18 [i_6] [(_Bool)1] [(_Bool)1] [(_Bool)1]))));
        }
        for (unsigned long long int i_7 = 4; i_7 < 11; i_7 += 4) /* same iter space */
        {
            var_29 += ((/* implicit */int) (((~(arr_23 [i_7 + 2] [i_7 - 3] [i_7 - 2]))) < ((-(arr_23 [i_7 - 1] [i_7 - 1] [i_7 + 1])))));
            /* LoopSeq 1 */
            for (unsigned int i_8 = 3; i_8 < 11; i_8 += 3) 
            {
                var_30 |= ((/* implicit */_Bool) ((-8191461206582098868LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8337)))));
                var_31 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))) || (((/* implicit */_Bool) var_14)))))) + (((unsigned long long int) min((0LL), (((/* implicit */long long int) (_Bool)1)))))));
                var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((0), (((/* implicit */int) (_Bool)1))))) ? (-2368435693858948107LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)138)))));
            }
        }
        arr_31 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_17)) << (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_10)))))) : (447090174)));
    }
    var_33 = ((/* implicit */unsigned short) ((int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)57199)) ? (((/* implicit */int) (short)14302)) : (((/* implicit */int) var_8))))), (((long long int) (signed char)-40)))));
}
