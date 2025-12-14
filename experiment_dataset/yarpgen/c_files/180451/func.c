/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180451
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
    var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)32768)) != ((+(((/* implicit */int) (unsigned short)32768)))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6))))) : ((~(var_0))))) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) (short)-10753)))), ((((_Bool)0) ? (1784783748) : (((/* implicit */int) (signed char)-124)))))))));
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_12)), (((var_8) * (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))) ? (((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) | (23U))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)10764)) ? (((/* implicit */int) (unsigned short)65530)) : (((/* implicit */int) var_15))))))) : (max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (short)-8525)), ((unsigned short)32778)))), (((unsigned int) var_5)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        var_21 ^= ((/* implicit */unsigned short) max((((/* implicit */long long int) (!(((((/* implicit */int) (short)12050)) >= (-13)))))), (((((/* implicit */_Bool) min((110458453), (((/* implicit */int) arr_1 [i_0]))))) ? (((long long int) (unsigned char)133)) : (((/* implicit */long long int) ((/* implicit */int) ((arr_2 [9U]) < (arr_2 [i_0 + 4])))))))));
        var_22 |= ((/* implicit */unsigned char) ((arr_3 [i_0] [i_0 - 2]) == (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_1 [i_0 + 2]))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        var_23 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [8ULL] [i_0] [i_3])) ? (arr_5 [i_1] [(_Bool)1]) : (arr_5 [i_0] [(unsigned short)6])))) ? (min((arr_5 [i_0] [i_0]), (((/* implicit */unsigned long long int) (unsigned char)255)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (arr_2 [2]) : (arr_6 [i_3] [i_3] [(short)10]))))))));
                        var_24 ^= ((/* implicit */short) arr_7 [(_Bool)1] [i_2]);
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [14] [i_1] [i_2] [i_3])) ? (arr_8 [i_0] [(signed char)17] [i_2] [i_3]) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_3]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_2] [i_2])) / (((/* implicit */int) arr_10 [i_0] [8LL] [i_2] [i_0]))))) : (((arr_8 [i_0] [i_1] [(signed char)10] [i_3]) % (17614996986125086241ULL)))))) ? (((((/* implicit */_Bool) ((unsigned char) arr_10 [(signed char)8] [(signed char)8] [8ULL] [(unsigned char)1]))) ? (((/* implicit */int) arr_7 [i_0 + 3] [i_2])) : (((((/* implicit */int) arr_7 [i_0] [i_2])) << (((((arr_6 [i_0 - 1] [i_1] [i_2]) + (565843105))) - (10))))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [11LL] [i_0] [i_2] [(_Bool)1]))) == (arr_8 [i_0 - 2] [i_0 + 1] [i_0 + 4] [i_0 - 1])))))))));
                    }
                } 
            } 
        } 
    }
    var_26 |= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_16)) == (((/* implicit */int) var_3)))) ? (min((((/* implicit */long long int) var_3)), (-2657558333542428845LL))) : (((/* implicit */long long int) ((/* implicit */int) ((2327699964609678969LL) != (((/* implicit */long long int) ((/* implicit */int) (short)10752)))))))))), (((((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) | (((/* implicit */long long int) var_17))))) ? (((((/* implicit */_Bool) var_4)) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_10)))))))));
}
