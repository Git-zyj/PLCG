/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142626
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
    var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) ((((/* implicit */int) var_7)) ^ (min((((/* implicit */int) var_7)), ((-(((/* implicit */int) var_3)))))))))));
    var_11 = ((/* implicit */long long int) ((((/* implicit */int) var_2)) * (((/* implicit */int) (!(((/* implicit */_Bool) 4254695362378534266ULL)))))));
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (signed char i_1 = 3; i_1 < 14; i_1 += 3) /* same iter space */
        {
            var_12 = ((/* implicit */short) ((signed char) arr_0 [i_0] [i_1]));
            var_13 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_4 [i_0 - 1])))) ? (((/* implicit */int) ((unsigned char) arr_7 [(_Bool)1] [i_0] [i_1 + 2]))) : (((/* implicit */int) (unsigned short)10031))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [(short)5] [i_0] [i_1 + 3])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */int) (signed char)-115)))))))) : (((/* implicit */int) (!(((((/* implicit */_Bool) arr_5 [i_0] [i_1])) || (((/* implicit */_Bool) var_1)))))))));
            var_14 = ((/* implicit */unsigned char) 47334935);
        }
        /* vectorizable */
        for (signed char i_2 = 3; i_2 < 14; i_2 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    {
                        arr_15 [i_0] [i_2] [i_2 + 2] [i_0] [i_2] = ((/* implicit */long long int) arr_6 [i_0]);
                        var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-95)) > (((/* implicit */int) (!((_Bool)1))))));
                        var_16 = ((/* implicit */unsigned short) ((unsigned char) (!(((/* implicit */_Bool) arr_4 [i_3])))));
                        arr_16 [i_0] [10] [(short)8] [(short)9] [i_2] = ((/* implicit */signed char) (~(((var_6) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned short)6])))))));
                        arr_17 [i_3] &= ((/* implicit */unsigned char) var_3);
                    }
                } 
            } 
            var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)1))))) & (((/* implicit */int) arr_1 [i_0 - 1]))));
            arr_18 [i_0] [i_2 + 1] &= ((/* implicit */long long int) ((arr_0 [i_0] [i_0]) != (((/* implicit */unsigned long long int) ((var_5) % (((/* implicit */int) (unsigned short)10016)))))));
            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_4) >> (((var_6) - (15889728904433618523ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_6 [i_2]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) : (var_9))))));
        }
        for (signed char i_5 = 2; i_5 < 13; i_5 += 2) 
        {
            var_19 = ((/* implicit */signed char) max((var_1), (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_8)))))))));
            arr_21 [i_0 - 2] [i_0 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((int) max((-47334936), (arr_19 [i_0 - 1] [i_0 - 1] [i_5])))) : (max((((/* implicit */int) ((_Bool) -1045871299128050928LL))), (min((((/* implicit */int) var_8)), (var_5)))))));
        }
        for (short i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) ((arr_7 [i_6] [i_6] [(unsigned char)3]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_6])))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (var_5)))))) ? (min((min((arr_9 [i_0] [i_6]), (((/* implicit */unsigned long long int) arr_13 [(unsigned char)14] [i_0] [i_0] [i_6])))), (((((/* implicit */_Bool) arr_6 [i_6])) ? (arr_9 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 47334927)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)45))) : (-6604690597550843536LL))))));
            var_21 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) >= (min((((/* implicit */unsigned long long int) ((long long int) arr_7 [(_Bool)1] [(_Bool)1] [(_Bool)1]))), (((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0 - 2] [i_0] [i_6]))))))));
            arr_24 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 55203382U)) ? (11687892033478922228ULL) : (11687892033478922231ULL)));
            arr_25 [i_6] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_13 [i_0 + 1] [i_0 - 1] [i_6] [i_0 - 1])), (((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_6] [(signed char)0] [i_6])) ? (var_6) : (((/* implicit */unsigned long long int) arr_4 [(_Bool)1]))))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_0)), (arr_7 [i_0] [i_6] [i_6])))) ? (((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_6])) ? (arr_9 [i_0] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)22))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_6] [i_0])) || (((/* implicit */_Bool) arr_14 [i_6] [i_6] [4ULL] [i_6] [i_6])))))))) : (((/* implicit */unsigned long long int) ((var_0) ? (((/* implicit */int) ((_Bool) (unsigned short)55512))) : (((/* implicit */int) (unsigned char)141)))))));
            var_22 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)55520))));
        }
        arr_26 [i_0] = ((/* implicit */unsigned char) var_2);
        /* LoopNest 3 */
        for (long long int i_7 = 0; i_7 < 17; i_7 += 2) 
        {
            for (signed char i_8 = 0; i_8 < 17; i_8 += 3) 
            {
                for (unsigned short i_9 = 1; i_9 < 16; i_9 += 2) 
                {
                    {
                        var_23 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(1045871299128050903LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_27 [i_7] [i_0]) == (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), (var_0))))))))) : (min((arr_27 [i_0] [(signed char)6]), (((/* implicit */long long int) ((((var_5) + (2147483647))) >> (((((/* implicit */int) var_7)) + (55))))))))));
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) arr_32 [14ULL] [i_0] [i_0] [i_0 - 1]))));
                        var_25 = ((/* implicit */long long int) ((((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) -1045871299128050903LL)) ? (-1794962135) : (((/* implicit */int) (short)-5942)))))) >= (max((-3046052618532299259LL), (((/* implicit */long long int) ((((/* implicit */_Bool) 1245180251U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7807))) : (3049787046U))))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        arr_39 [i_10] = ((/* implicit */signed char) (-(((/* implicit */int) ((arr_36 [i_10]) == (((/* implicit */int) var_2)))))));
        var_26 *= ((/* implicit */_Bool) ((short) ((_Bool) arr_36 [i_10])));
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        var_27 = ((/* implicit */signed char) min((var_27), (var_3)));
        arr_42 [i_11] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_22 [i_11] [i_11] [i_11])), (var_9)))) ? (max((arr_5 [i_11] [i_11]), (470948633U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (arr_36 [i_11]) : (((/* implicit */int) var_3))))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) >= (min((((/* implicit */unsigned long long int) arr_20 [i_11] [7U] [i_11])), (8190ULL))))))));
    }
}
