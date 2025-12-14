/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184368
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
    var_13 += ((/* implicit */unsigned char) ((var_8) / (((/* implicit */long long int) (-(((/* implicit */int) var_4)))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = arr_7 [2ULL];
                    var_14 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_2 - 2]))))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                    var_15 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                    var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) ((short) arr_3 [i_2 + 1] [i_2 - 3])))));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65520)) ^ (((int) arr_7 [i_0]))));
        /* LoopNest 2 */
        for (signed char i_3 = 2; i_3 < 8; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
            {
                {
                    var_18 ^= ((/* implicit */short) ((((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) (signed char)77))))), (((((/* implicit */_Bool) 1529041036689054145LL)) ? (-1901074180605852821LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-24561))))))) + (9223372036854775807LL))) >> (((/* implicit */int) ((unsigned char) 5227704937915350583ULL)))));
                    var_19 = ((/* implicit */short) (-(((/* implicit */int) (short)7640))));
                    arr_16 [5LL] [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) (signed char)-15))) ^ (((/* implicit */int) arr_14 [i_0] [i_0] [i_4] [i_3]))))) >= (((unsigned long long int) min((5758641778881102004LL), (((/* implicit */long long int) var_9)))))));
                }
            } 
        } 
        var_20 = ((/* implicit */signed char) max((((/* implicit */int) (short)-31091)), (((((/* implicit */int) (signed char)120)) & (((/* implicit */int) ((unsigned char) (signed char)-13)))))));
        var_21 = ((/* implicit */short) min((var_21), (((short) ((unsigned short) ((signed char) 5050262669986493400ULL))))));
    }
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
    {
        arr_19 [i_5] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (signed char)118)), ((~(13396481403723058242ULL)))));
        var_22 = ((unsigned long long int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) | (1979067300465869388ULL))), (((((/* implicit */_Bool) 1350834338)) ? (4799521081327907187ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121)))))));
        var_23 *= ((/* implicit */signed char) ((unsigned short) ((int) var_1)));
    }
    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 3) 
    {
        arr_23 [i_6] = ((/* implicit */int) (-(min((((/* implicit */long long int) (~(((/* implicit */int) var_10))))), (((arr_20 [15ULL] [(_Bool)1]) >> (((/* implicit */int) arr_22 [9LL]))))))));
        var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_20 [i_6] [i_6])) / (((unsigned long long int) ((((/* implicit */_Bool) arr_20 [5] [i_6])) ? (var_1) : (((/* implicit */unsigned long long int) arr_20 [(short)2] [(short)2])))))));
        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((((/* implicit */int) arr_21 [(signed char)4])) - (((arr_22 [i_6]) ? (((/* implicit */int) (unsigned short)12979)) : (((/* implicit */int) arr_21 [(unsigned char)12])))))) + (((/* implicit */int) arr_22 [i_6])))))));
        var_26 = (~(1979067300465869391ULL));
        arr_24 [i_6] = ((/* implicit */signed char) min((min((((arr_20 [i_6] [i_6]) | (((/* implicit */long long int) -2147483632)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) (unsigned short)54312)) : (((/* implicit */int) (unsigned short)32764))))))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)63232)) & (((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_9)))))))));
    }
    var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1620733354082138001LL))));
}
