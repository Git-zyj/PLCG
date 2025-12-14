/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103018
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
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)193))));
            arr_4 [8ULL] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 4073886847U)) ? (57923966U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))));
            arr_5 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (arr_3 [i_0]) : (arr_3 [i_0])));
        }
        for (unsigned short i_2 = 2; i_2 < 17; i_2 += 3) 
        {
            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) min((((((/* implicit */_Bool) (short)16110)) ? (((int) arr_8 [i_0] [i_0] [8])) : (((/* implicit */int) var_0)))), ((+(((/* implicit */int) (short)16110)))))))));
            var_19 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-16130))));
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                for (short i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    {
                        arr_15 [i_0] [i_2] [i_3] = min((((/* implicit */int) arr_13 [5LL] [5LL] [i_2 + 2] [i_2])), (min((arr_2 [(unsigned char)16] [i_2]), (((/* implicit */int) var_8)))));
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_2] [i_4] [i_0])) ? (((((/* implicit */_Bool) (~(4720076212493462206ULL)))) ? (((/* implicit */int) min((((/* implicit */short) var_6)), ((short)16130)))) : ((-(((/* implicit */int) var_6)))))) : (((((/* implicit */int) var_8)) - (((int) arr_11 [(signed char)5] [i_2] [i_2] [i_3])))))))));
                    }
                } 
            } 
        }
        var_21 *= (!(((/* implicit */_Bool) var_10)));
        /* LoopSeq 3 */
        for (long long int i_5 = 4; i_5 < 18; i_5 += 3) 
        {
            arr_18 [14LL] [i_5 + 2] [i_5] |= var_13;
            arr_19 [17] [7U] [i_5] = ((var_12) != ((~(((/* implicit */int) (_Bool)1)))));
            var_22 ^= ((/* implicit */int) arr_12 [2U] [i_0] [i_0] [i_0]);
            arr_20 [i_5] = ((/* implicit */_Bool) var_1);
            var_23 |= ((/* implicit */short) var_14);
        }
        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) min((((/* implicit */unsigned int) (-(((/* implicit */int) max((((/* implicit */unsigned char) arr_24 [14])), ((unsigned char)48))))))), (((unsigned int) (signed char)-33)))))));
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (long long int i_8 = 0; i_8 < 21; i_8 += 4) 
                {
                    {
                        var_25 = ((/* implicit */long long int) arr_10 [i_0] [i_8]);
                        arr_30 [i_7] [17LL] [i_7] [i_8] = ((/* implicit */unsigned char) min((((long long int) arr_16 [i_0] [i_6] [i_6])), (((/* implicit */long long int) ((arr_16 [4U] [i_7] [(unsigned short)20]) ? (((/* implicit */int) arr_16 [i_6] [i_6] [i_7])) : (((/* implicit */int) arr_16 [i_8] [i_6] [i_0])))))));
                    }
                } 
            } 
        }
        for (unsigned char i_9 = 2; i_9 < 20; i_9 += 3) 
        {
            var_26 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_21 [i_9] [i_0])) : (((/* implicit */int) var_11)))) >> (((((/* implicit */int) var_0)) - (163))))) << (((((/* implicit */int) max((arr_21 [i_0] [(signed char)14]), (((/* implicit */unsigned short) var_6))))) - (33461)))));
            var_27 *= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) arr_10 [i_9] [i_9 - 2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 898296047)) ? (((/* implicit */int) (short)16130)) : (((/* implicit */int) var_0))))) : (arr_25 [3ULL]))));
        }
        var_28 = ((/* implicit */_Bool) max((var_28), ((!(((/* implicit */_Bool) (short)16115))))));
    }
    for (int i_10 = 3; i_10 < 16; i_10 += 3) 
    {
        var_29 += ((((/* implicit */int) arr_17 [i_10] [i_10])) / (((((/* implicit */int) arr_21 [i_10 + 1] [i_10 - 3])) + (((/* implicit */int) arr_21 [i_10] [i_10 - 3])))));
        arr_37 [i_10] [i_10] = ((/* implicit */_Bool) (short)16115);
    }
    for (unsigned short i_11 = 0; i_11 < 21; i_11 += 3) 
    {
        arr_40 [1LL] = min((((((/* implicit */_Bool) (unsigned short)16380)) ? (((/* implicit */int) arr_7 [i_11])) : (-1))), (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_6 [(signed char)6]))))));
        arr_41 [(unsigned char)13] = ((/* implicit */unsigned int) arr_28 [i_11] [i_11]);
    }
    var_30 |= ((/* implicit */int) (signed char)1);
    var_31 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-16120)) ? (((/* implicit */int) (unsigned char)62)) : (((/* implicit */int) (unsigned short)65509))))) ? (((/* implicit */int) (unsigned char)255)) : (min((((/* implicit */int) var_4)), (-1796178244))))), (((((((/* implicit */int) var_2)) + (2147483647))) >> (((((var_15) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (short)-16117)))) - (25066)))))));
    var_32 = ((/* implicit */unsigned short) var_10);
}
