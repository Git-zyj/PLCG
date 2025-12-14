/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12527
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
    var_15 = 1268947541;
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) min((((/* implicit */int) ((short) 1268947570))), (((((/* implicit */int) (short)-6982)) % (1268947549))))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */_Bool) ((max((arr_3 [i_0] [i_1] [i_2]), (min((var_14), (((/* implicit */int) arr_0 [8LL] [i_1])))))) / (((((/* implicit */_Bool) -1268947544)) ? (min((-1268947544), (arr_5 [i_0]))) : (min((((/* implicit */int) arr_6 [i_1] [(short)9])), (-1268947544)))))));
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (signed char)-13))));
                    arr_8 [(unsigned short)3] [i_2] = ((/* implicit */short) min((((/* implicit */int) ((unsigned char) 1268947549))), ((((~(((/* implicit */int) arr_7 [i_0] [i_1])))) | (((-1268947541) & (((/* implicit */int) var_13))))))));
                    arr_9 [i_2] [(unsigned char)1] [i_1] = ((/* implicit */short) var_1);
                    arr_10 [13LL] [i_1] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [(_Bool)1])) ? (max((-1268947546), (-1054233916))) : (((/* implicit */int) (short)32759))))), (min((arr_2 [i_0] [(unsigned short)4] [i_2]), (((/* implicit */long long int) max((1268947544), (arr_3 [(short)12] [(short)12] [(short)0]))))))));
                }
            } 
        } 
    }
    for (int i_3 = 0; i_3 < 15; i_3 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)-98)), (((((/* implicit */_Bool) (unsigned char)231)) ? (((/* implicit */int) (short)-17217)) : (((/* implicit */int) var_5))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_5), (var_2))))) : (max((((((/* implicit */_Bool) arr_2 [i_3] [i_3] [i_3])) ? (((/* implicit */long long int) -447249830)) : (var_12))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)13641)) ? (-447249855) : (1268947541))))))));
        var_20 ^= ((/* implicit */unsigned short) (-(((((_Bool) arr_3 [9] [i_3] [4])) ? (((((/* implicit */int) var_5)) >> (((1268947544) - (1268947532))))) : (((/* implicit */int) (short)31))))));
        arr_14 [i_3] = ((/* implicit */unsigned short) ((arr_1 [6]) <= ((-(arr_1 [i_3])))));
        arr_15 [i_3] = ((/* implicit */short) ((((int) max((((/* implicit */int) (short)-32760)), (1268947543)))) == (max(((~(447249822))), (arr_4 [i_3] [1] [1])))));
    }
    /* LoopSeq 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_19 [i_4] [(short)1] = ((/* implicit */short) arr_4 [6LL] [i_4] [i_4]);
        arr_20 [i_4] [(_Bool)1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)22382)) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) (signed char)6)) >> (((arr_2 [(unsigned char)10] [i_4] [i_4]) - (4336036904983605835LL))))))) != (-961541404)));
        var_21 += ((/* implicit */unsigned char) min(((~(((/* implicit */int) min((arr_12 [i_4] [(unsigned short)3]), (arr_12 [i_4] [i_4])))))), (((/* implicit */int) ((max((((/* implicit */int) var_5)), (1268947519))) != (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_6 [i_4] [i_4])) : (((/* implicit */int) (short)-32755)))))))));
    }
    for (signed char i_5 = 0; i_5 < 15; i_5 += 3) 
    {
        var_22 = min((((/* implicit */int) (!(((/* implicit */_Bool) (short)-11172))))), (((int) (+(arr_13 [(_Bool)1])))));
        arr_23 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((1268947547), (((/* implicit */int) var_11))))) ? (((/* implicit */int) arr_7 [i_5] [i_5])) : ((~(((/* implicit */int) (signed char)96))))))) ? (((/* implicit */int) ((((/* implicit */int) var_8)) != ((~(((/* implicit */int) (short)11170))))))) : ((-(((/* implicit */int) (short)32764))))));
        arr_24 [(signed char)14] = ((/* implicit */signed char) ((((/* implicit */int) max((arr_21 [i_5]), (((/* implicit */short) var_3))))) < (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_4))))))))));
    }
}
