/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152092
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))))))) || (((((/* implicit */_Bool) ((int) var_3))) && (var_7)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_12 += ((/* implicit */long long int) ((_Bool) (+(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 7388756683567430102ULL))))))));
                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(7388756683567430102ULL)))) && (((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
                arr_4 [i_1] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1]))) | (var_3))));
                var_14 ^= ((/* implicit */long long int) (+(((/* implicit */int) var_7))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) min((min((((((/* implicit */_Bool) arr_5 [i_2])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))), (((var_7) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))), (((/* implicit */unsigned int) ((unsigned short) arr_6 [i_2]))))))));
        var_16 ^= ((/* implicit */unsigned int) (unsigned char)15);
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 1; i_5 < 23; i_5 += 3) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) (~(((((14124145057689421360ULL) >> (((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [i_2] [i_2])))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                        var_18 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -204742558609796803LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))))))) ? ((-(((/* implicit */int) var_8)))) : ((~(((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) var_0)))))))));
                        var_19 &= ((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_6)), (var_2)))) + (((arr_6 [i_2]) - (((/* implicit */unsigned long long int) 204742558609796802LL))))))));
                        var_20 ^= ((/* implicit */unsigned char) (~(max((((/* implicit */unsigned long long int) arr_12 [i_5 - 1] [i_5] [i_5 - 1] [i_5 + 2])), (var_5)))));
                    }
                } 
            } 
            arr_15 [(unsigned short)2] &= ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_2] [i_3])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3] [i_2] [i_3] [i_3] [i_2]))))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_19 [i_6] [i_6] = min((arr_12 [i_2] [i_2] [i_2] [i_2]), (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (unsigned char)123))) ? (((/* implicit */int) (short)-8159)) : (((((/* implicit */int) arr_17 [i_2] [i_2] [i_2])) & (((/* implicit */int) var_1))))))));
            var_21 = ((/* implicit */long long int) ((((max((arr_16 [i_2] [i_2] [i_2]), (((/* implicit */unsigned long long int) var_9)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) + (((/* implicit */unsigned long long int) 1340764176159437452LL))));
            var_22 = ((/* implicit */_Bool) min((var_22), ((!(((/* implicit */_Bool) var_4))))));
        }
        arr_20 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -1265234391)) ? (4322599016020130255ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))))) % (min(((+(((/* implicit */int) (short)8159)))), (((((/* implicit */_Bool) 204742558609796803LL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10))))))));
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((-(((/* implicit */int) var_7))))))) && (((/* implicit */_Bool) ((204742558609796803LL) | (max((((/* implicit */long long int) (unsigned char)244)), (-4625661861422047935LL))))))));
    }
}
