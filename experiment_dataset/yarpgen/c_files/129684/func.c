/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129684
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
    var_13 = ((/* implicit */int) max((2919782145426438243ULL), (((/* implicit */unsigned long long int) var_5))));
    var_14 = ((/* implicit */signed char) (-(((/* implicit */int) min(((unsigned char)191), (((/* implicit */unsigned char) (_Bool)0)))))));
    var_15 = ((/* implicit */unsigned long long int) max(((unsigned char)156), (((/* implicit */unsigned char) ((_Bool) (~(((/* implicit */int) (signed char)-38))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_16 ^= ((/* implicit */signed char) 15526961928283113377ULL);
            /* LoopSeq 3 */
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                var_17 = ((/* implicit */long long int) var_4);
                var_18 = ((/* implicit */long long int) ((unsigned short) var_10));
            }
            for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                var_19 += ((/* implicit */unsigned int) 836989553);
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (-(-836989553))))));
                arr_12 [8LL] [i_0] [(short)5] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) (unsigned char)217)))));
                var_21 = (+(arr_6 [i_3] [i_0]));
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (~(arr_11 [i_3]))))));
            }
            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                var_23 = ((/* implicit */long long int) (-(((/* implicit */int) arr_13 [4LL] [i_1] [7ULL] [i_0]))));
                var_24 = ((/* implicit */unsigned char) var_6);
            }
            arr_16 [i_1] = ((/* implicit */signed char) -7617607707833817612LL);
            arr_17 [(unsigned char)9] = (signed char)-4;
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)62500)), (arr_10 [i_0] [i_0] [i_0] [(signed char)1])));
            /* LoopSeq 1 */
            for (unsigned int i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                arr_23 [i_6] [i_0] &= ((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) 1225317620)) || (((/* implicit */_Bool) -269324621))))), ((unsigned short)65535)));
                var_26 = ((/* implicit */_Bool) min((max((((/* implicit */long long int) max(((short)28106), (((/* implicit */short) arr_20 [i_5] [(_Bool)1]))))), (min((arr_11 [i_0]), (var_7))))), (((/* implicit */long long int) arr_13 [(unsigned short)9] [(_Bool)1] [4ULL] [(unsigned short)9]))));
                arr_24 [5ULL] [i_5] [i_5] [i_0] = ((/* implicit */int) min(((unsigned short)23129), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(274877906943ULL)))))))));
            }
        }
        arr_25 [4LL] [i_0] = ((/* implicit */unsigned short) min((arr_7 [i_0] [(signed char)9] [i_0] [i_0]), ((!(((/* implicit */_Bool) var_5))))));
    }
}
