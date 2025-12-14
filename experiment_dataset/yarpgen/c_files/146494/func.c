/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146494
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
    var_11 = ((/* implicit */unsigned long long int) ((((long long int) ((long long int) var_0))) >= (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((var_7) && (((/* implicit */_Bool) 1661091346)))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) max((var_12), (((unsigned short) ((unsigned long long int) ((int) var_10))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((unsigned short) ((unsigned short) arr_0 [i_0] [i_0]))))));
            var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) arr_1 [i_1]))) - (((/* implicit */int) ((unsigned short) 1545729658089639534LL)))));
        }
        for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            var_15 -= ((/* implicit */long long int) ((short) ((int) ((unsigned int) var_1))));
            var_16 -= ((/* implicit */unsigned long long int) ((short) ((short) ((((/* implicit */_Bool) (short)-13680)) && (((/* implicit */_Bool) 1288869253U))))));
        }
        for (unsigned short i_3 = 1; i_3 < 19; i_3 += 4) 
        {
            var_17 -= ((/* implicit */short) ((unsigned int) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_3] [i_0]))) ^ (14748610180424514968ULL)))));
            arr_10 [i_0] [i_0] [i_3] = ((unsigned short) ((long long int) ((((/* implicit */int) (signed char)70)) + (1771733789))));
            var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) arr_8 [i_0]))) / (((((/* implicit */int) var_9)) % (((/* implicit */int) (short)20731))))))) && (((/* implicit */_Bool) ((long long int) ((2063948416U) % (var_3)))))));
        }
        arr_11 [i_0] = ((/* implicit */unsigned short) ((long long int) ((signed char) ((((/* implicit */int) (_Bool)1)) ^ (var_2)))));
    }
    /* LoopSeq 2 */
    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) /* same iter space */
    {
        var_19 *= ((/* implicit */signed char) ((unsigned int) ((long long int) ((((/* implicit */int) arr_12 [i_4])) + (((/* implicit */int) arr_12 [i_4]))))));
        arr_14 [i_4] [1ULL] = ((/* implicit */int) ((((((unsigned int) var_9)) / (((unsigned int) (unsigned short)30544)))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) var_10)) | (((/* implicit */int) var_9)))) >= (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)1))))))))));
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((unsigned int) ((unsigned int) arr_13 [i_4] [i_4])))) / (((long long int) ((short) var_7))))))));
        /* LoopNest 2 */
        for (long long int i_5 = 1; i_5 < 22; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                {
                    var_21 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) ((signed char) var_9))) || (((arr_17 [(unsigned short)12] [i_5] [i_5]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))));
                    arr_19 [i_4] [i_5] [i_5] [(_Bool)1] = ((((/* implicit */int) ((_Bool) ((signed char) (unsigned short)53847)))) ^ (((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) var_2)) / (10375349196814740965ULL))))));
                    var_22 *= ((((((/* implicit */int) ((var_0) >= (((/* implicit */int) var_7))))) / (((int) var_10)))) % (((/* implicit */int) ((unsigned short) ((var_0) | (var_0))))));
                    arr_20 [i_4] [i_5] [i_5] [16LL] &= ((long long int) ((((arr_15 [i_4] [i_5] [i_6]) - (2840268002683254933ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-70)) + (((/* implicit */int) arr_16 [i_6] [i_4] [i_4])))))));
                    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((unsigned short) ((((var_6) - (((/* implicit */unsigned long long int) var_1)))) / (((/* implicit */unsigned long long int) ((-1771733796) ^ (((/* implicit */int) var_10)))))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 24; i_7 += 4) /* same iter space */
    {
        arr_23 [i_7] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) arr_16 [i_7] [(unsigned short)15] [i_7])) >= (((/* implicit */int) (signed char)12)))));
        var_24 = ((int) ((4205079521404973596LL) & (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    }
}
