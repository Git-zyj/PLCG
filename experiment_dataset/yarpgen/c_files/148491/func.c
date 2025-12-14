/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148491
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_2 [(unsigned char)2] = ((/* implicit */unsigned int) ((short) (-(((/* implicit */int) var_9)))));
        arr_3 [(unsigned char)4] [i_0] = var_6;
        var_14 = ((/* implicit */unsigned long long int) (short)-1744);
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -2485756022788894015LL)) ? (4675979184800791530ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)221)) != (67108863)))) == (((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */int) (short)-6))));
    }
    for (unsigned char i_1 = 3; i_1 < 16; i_1 += 2) 
    {
        var_15 += ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((unsigned short) var_2))), ((-(var_7)))));
        arr_7 [i_1] = ((/* implicit */unsigned int) 8597183120568486553LL);
        var_16 = ((/* implicit */short) (-(((/* implicit */int) ((unsigned char) 67108863)))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        var_17 = ((/* implicit */unsigned int) (+(9085695276258742865LL)));
        var_18 *= ((/* implicit */signed char) ((((/* implicit */int) ((signed char) 67108882))) >> (((((/* implicit */int) var_4)) + (19419)))));
        var_19 = ((/* implicit */short) ((((/* implicit */long long int) arr_8 [i_2])) / (7500304128896202491LL)));
    }
    /* LoopSeq 1 */
    for (unsigned int i_3 = 1; i_3 < 19; i_3 += 2) 
    {
        arr_12 [i_3] = max((67108853), ((-(((/* implicit */int) ((((/* implicit */int) (short)-1)) < (((/* implicit */int) (short)20728))))))));
        var_20 = ((/* implicit */long long int) var_12);
        var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3] [i_3 + 1]))) >= (6539770521740679626ULL)))) >> (((((((/* implicit */int) arr_9 [i_3] [i_3 + 1])) << (((((/* implicit */int) arr_9 [i_3 - 1] [i_3 + 1])) - (15))))) - (8650748)))));
        arr_13 [(signed char)12] = ((/* implicit */unsigned int) min((((unsigned char) arr_11 [i_3 - 1])), ((unsigned char)255)));
        arr_14 [4LL] [i_3] = (-((+(((long long int) (signed char)127)))));
    }
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)148)) <= (((/* implicit */int) (short)20728)))))))) ? ((-(((/* implicit */int) arr_17 [i_4] [i_4])))) : ((-(((/* implicit */int) ((((/* implicit */_Bool) 13297825094598551844ULL)) && (((/* implicit */_Bool) arr_17 [i_4] [i_5])))))))));
                arr_19 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 6539770521740679610ULL)) ? (((/* implicit */int) arr_17 [i_4] [(short)10])) : (((/* implicit */int) arr_16 [i_4]))))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (+(arr_18 [(signed char)16])))) ? (((/* implicit */int) ((((/* implicit */int) (short)-32407)) != (((/* implicit */int) var_12))))) : (((/* implicit */int) (short)-1))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_6 = 0; i_6 < 24; i_6 += 4) 
    {
        arr_22 [i_6] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_16 [3])) ? (-1) : (((/* implicit */int) (unsigned short)23438))))))), (((((/* implicit */_Bool) ((unsigned int) arr_18 [i_6]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_6]))) : (arr_15 [i_6] [i_6])))));
        arr_23 [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((-1257212809725320878LL) % (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_6])))))) ? (((unsigned int) (short)-20721)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_6])))))) ? (((arr_15 [i_6] [18LL]) % (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)24)), (1674823634U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25403)))));
    }
    for (unsigned char i_7 = 1; i_7 < 22; i_7 += 4) 
    {
        /* LoopNest 2 */
        for (short i_8 = 0; i_8 < 24; i_8 += 2) 
        {
            for (unsigned int i_9 = 2; i_9 < 22; i_9 += 1) 
            {
                {
                    arr_31 [(_Bool)1] [(_Bool)1] [i_9 - 1] [i_9 - 1] = ((/* implicit */signed char) min((((/* implicit */long long int) ((231474118) << (((6539770521740679625ULL) - (6539770521740679625ULL)))))), (max((arr_18 [i_7 - 1]), (arr_18 [i_7 - 1])))));
                    var_23 = ((/* implicit */unsigned int) arr_24 [i_7 + 1]);
                }
            } 
        } 
        var_24 += ((/* implicit */short) max((((/* implicit */unsigned long long int) -74790442456728824LL)), (14388146580007124268ULL)));
    }
}
