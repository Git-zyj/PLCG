/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184940
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
    var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)47627)) ^ (((/* implicit */int) (unsigned char)238))))) ? (((/* implicit */int) var_15)) : (((var_16) - (((/* implicit */int) var_9)))))) < (((/* implicit */int) ((((((/* implicit */_Bool) var_18)) ? (18445449508673830831ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (var_18))));
        var_20 -= ((/* implicit */_Bool) (unsigned char)1);
        var_21 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((min((((/* implicit */long long int) var_15)), (var_18))) == (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (-1658844919) : (((/* implicit */int) (unsigned char)3)))))))))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 20; i_1 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (int i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */int) ((unsigned short) max((var_10), (((/* implicit */unsigned char) arr_6 [i_0] [i_1] [i_0])))))) ^ (((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_1]))))));
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */signed char) 1658844933);
                            arr_14 [i_0] [i_0] [(short)10] [(short)10] |= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((long long int) (short)30836))) ? (((/* implicit */unsigned long long int) ((arr_12 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2])))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31))) : (15769251727856071356ULL))))), ((+(var_14)))));
                        }
                    } 
                } 
            }
            for (long long int i_5 = 1; i_5 < 17; i_5 += 4) 
            {
                var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((((/* implicit */int) var_13)) + (((/* implicit */int) (unsigned char)21))))) % ((~(0LL))))) + (((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_0] [i_0])))))));
                var_25 = ((/* implicit */unsigned char) arr_6 [i_0] [i_1] [i_5 + 2]);
                var_26 = ((/* implicit */short) max((((unsigned char) 8LL)), ((unsigned char)153)));
                var_27 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) -364643702)) ? (3272464261504788558ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_5])))))))) ? (((/* implicit */int) (unsigned char)20)) : (((((/* implicit */_Bool) (short)811)) ? (((/* implicit */int) min((var_12), (((/* implicit */unsigned char) (_Bool)1))))) : (((/* implicit */int) (short)0))))));
                /* LoopSeq 2 */
                for (short i_6 = 0; i_6 < 20; i_6 += 3) 
                {
                    arr_20 [i_0] [i_5] [i_5 + 3] [i_6] [i_0] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) 1858401146)))));
                    arr_21 [i_5] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) arr_9 [8] [i_1] [i_5 + 1] [i_5] [i_5] [i_0]))) >> (((((/* implicit */int) ((unsigned short) max((arr_1 [i_0]), (((/* implicit */long long int) arr_7 [i_0] [i_1] [i_0] [i_0])))))) - (62930)))));
                }
                /* vectorizable */
                for (int i_7 = 1; i_7 < 19; i_7 += 1) 
                {
                    arr_25 [6] [i_1] [i_5] [i_7] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247))) : (3272464261504788575ULL)));
                    var_28 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-62)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (0ULL)));
                    var_29 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_23 [i_7] [i_7 + 1] [i_7 + 1] [i_7 + 1])) % (arr_8 [i_5 + 1] [i_7 - 1] [i_7 + 1])));
                    var_30 ^= ((int) ((var_15) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                    arr_26 [i_7] [i_5] [i_5] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0] [i_7] [i_5] [i_1] [(unsigned char)5] [(unsigned char)5])) || (((/* implicit */_Bool) var_12)))))));
                }
            }
            var_31 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_22 [0] [i_0] [i_0] [i_0] [i_0])), (var_3)))) ? (((/* implicit */int) ((short) -1826286231))) : (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-1)), (arr_16 [i_1] [i_1] [i_1] [i_0]))))))), (9499716501906681398ULL));
        }
        for (int i_8 = 0; i_8 < 20; i_8 += 4) /* same iter space */
        {
            arr_31 [i_0] [i_0] = ((/* implicit */unsigned short) ((short) var_0));
            var_32 ^= ((/* implicit */_Bool) max((arr_23 [i_0] [i_0] [i_8] [i_8]), ((-(-235681196)))));
        }
    }
}
