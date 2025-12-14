/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159359
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))) % (((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57807)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_1 [i_1]))) ? (((/* implicit */int) min((arr_5 [(signed char)6] [i_0]), (((/* implicit */unsigned char) arr_1 [i_1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) ? ((~(((/* implicit */int) arr_1 [i_0])))) : (((((((/* implicit */_Bool) arr_1 [1ULL])) || (((/* implicit */_Bool) (signed char)17)))) ? (((((/* implicit */int) (unsigned short)16079)) & (((/* implicit */int) (short)-6573)))) : (((/* implicit */int) var_3))))));
                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)152)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)152))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)90)), ((unsigned short)30756)))) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_1])) > (((/* implicit */int) (unsigned char)177)))))));
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_5 [i_0] [i_1])) - (((/* implicit */int) arr_5 [i_0] [i_1])))) << (((int) arr_5 [i_1] [i_0]))));
                var_15 = ((/* implicit */unsigned int) (~(((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */int) var_7)) < (((/* implicit */int) arr_5 [i_1] [(_Bool)1]))))), (min((arr_3 [i_1]), ((unsigned char)230))))))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    var_16 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((arr_4 [i_0] [7ULL] [i_2]), (((/* implicit */unsigned short) arr_5 [i_1] [i_0])))))));
                    arr_10 [i_1] [i_1] [i_0] [i_1] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) arr_3 [i_1])) * (((/* implicit */int) arr_3 [i_0])))));
                    var_17 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [4U] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_8 [2LL] [2LL])))) ? (((((/* implicit */_Bool) arr_8 [(_Bool)1] [(_Bool)1])) ? (arr_8 [(_Bool)1] [i_1]) : (var_0))) : (arr_8 [(unsigned char)2] [i_1])));
                    var_18 = max(((((!(((/* implicit */_Bool) (unsigned char)162)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 11770074609247696588ULL)) || (((/* implicit */_Bool) (unsigned short)10471)))))) : (((((/* implicit */_Bool) var_7)) ? (-940085809944595522LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_1]))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)80))) : (729196135573527459ULL)))) || (((/* implicit */_Bool) var_11))))));
                }
                for (signed char i_3 = 4; i_3 < 20; i_3 += 1) 
                {
                    arr_13 [i_0] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned char) (unsigned char)26)))));
                    arr_14 [i_0] [i_1] [i_1] [(short)18] &= ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) ((arr_8 [22ULL] [22ULL]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
                }
            }
        } 
    } 
}
