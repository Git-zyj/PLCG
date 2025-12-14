/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151480
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) /* same iter space */
    {
        var_15 = var_3;
        var_16 = ((/* implicit */short) max((((((/* implicit */int) ((unsigned char) 32512))) * (((((/* implicit */int) var_4)) - (402653184))))), ((~(arr_1 [i_0])))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) & (((/* implicit */long long int) ((/* implicit */int) var_1)))));
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) ((((-32513) >= ((+(32504))))) || (((/* implicit */_Bool) min((7456059377380504614LL), (((/* implicit */long long int) var_11)))))));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32748)) ? (((/* implicit */int) (short)(-32767 - 1))) : (-32512)));
    }
    for (int i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        arr_8 [2] [2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_11)), (arr_7 [11ULL] [i_2])))) || (((/* implicit */_Bool) arr_7 [i_2] [i_2])))) || (((/* implicit */_Bool) var_2))));
        /* LoopSeq 3 */
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            arr_11 [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_9 [i_3] [i_3])) >= (arr_6 [i_2]))) ? (min((arr_7 [i_3] [i_3]), (((/* implicit */unsigned int) var_11)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
            var_19 ^= ((/* implicit */_Bool) var_2);
            arr_12 [i_3] = ((/* implicit */short) min((((((/* implicit */long long int) -415419148)) >= (8208005505047299482LL))), (((_Bool) ((((/* implicit */_Bool) arr_7 [i_3] [(unsigned short)1])) ? (arr_6 [(_Bool)1]) : (-415419156))))));
        }
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            var_20 ^= ((/* implicit */unsigned char) (-(7456059377380504614LL)));
            arr_15 [i_4] [i_2] = ((/* implicit */short) ((arr_6 [i_4]) - (((/* implicit */int) arr_13 [i_2] [i_4] [i_4]))));
        }
        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            var_21 = ((/* implicit */unsigned int) max((((int) (unsigned char)122)), (((/* implicit */int) var_0))));
            var_22 = ((/* implicit */short) var_5);
        }
    }
    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_7 = 0; i_7 < 21; i_7 += 1) 
        {
            arr_22 [i_6] [i_7] [i_6] = ((/* implicit */unsigned int) ((((arr_19 [i_6]) & (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) > (((/* implicit */unsigned int) ((/* implicit */int) max((arr_20 [i_7]), (arr_20 [i_6])))))));
            arr_23 [i_6] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) 4122210635U)) ? (((/* implicit */int) ((((/* implicit */int) ((unsigned char) -415419167))) >= (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)44082)) : (((/* implicit */int) var_6))))))) : (((((/* implicit */_Bool) ((signed char) 12503878681846559918ULL))) ? (415419155) : (((/* implicit */int) (unsigned char)123))))));
            arr_24 [i_6] [i_7] [i_6] = ((/* implicit */unsigned long long int) var_13);
        }
        /* vectorizable */
        for (unsigned short i_8 = 3; i_8 < 19; i_8 += 3) 
        {
            /* LoopNest 2 */
            for (short i_9 = 0; i_9 < 21; i_9 += 2) 
            {
                for (unsigned long long int i_10 = 1; i_10 < 20; i_10 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (-32517)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7)))))));
                        arr_33 [i_6] [i_8 - 2] [i_9] [i_10 - 1] = ((/* implicit */long long int) (short)15446);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 2) 
            {
                arr_36 [i_6] [i_8] [i_11] = ((((/* implicit */int) arr_30 [i_8 - 2] [i_8 - 2] [i_8])) ^ (var_12));
                var_24 = ((/* implicit */short) ((((/* implicit */int) arr_28 [i_8] [i_8 - 2] [i_11])) << (((((/* implicit */int) var_2)) - (3270)))));
            }
        }
        var_25 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_25 [i_6] [6LL] [i_6])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0)))));
    }
    var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) max((var_1), (((/* implicit */unsigned short) var_4))))) < (((/* implicit */int) var_4))));
    var_27 = ((/* implicit */short) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_12))))), (min((var_0), (((/* implicit */unsigned short) var_13))))));
    var_28 = ((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) min(((unsigned short)46132), (((/* implicit */unsigned short) var_11))))))));
}
