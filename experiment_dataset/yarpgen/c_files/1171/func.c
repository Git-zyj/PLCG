/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1171
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] [i_1 + 2] |= ((/* implicit */unsigned long long int) ((unsigned char) ((short) 9223372036854775807LL)));
                arr_5 [(unsigned char)7] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            arr_11 [(signed char)6] [i_1] [i_2] = ((/* implicit */short) (unsigned short)39718);
                            var_13 = ((/* implicit */unsigned short) ((unsigned char) (+(((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25818))))))));
                            var_14 -= ((/* implicit */signed char) var_4);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 3; i_4 < 19; i_4 += 2) 
    {
        for (long long int i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            {
                arr_18 [i_4 + 1] [(signed char)10] [i_5] = ((((/* implicit */long long int) ((((((/* implicit */int) arr_15 [i_4] [i_4] [i_4])) & (((/* implicit */int) (short)17760)))) ^ (((/* implicit */int) (short)-28))))) & (((long long int) 16273536318172460172ULL)));
                arr_19 [i_4 - 2] [i_5] &= ((/* implicit */unsigned short) max((((((((/* implicit */int) (signed char)-37)) == (((/* implicit */int) arr_12 [7ULL])))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)147)), ((unsigned short)39706)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_16 [i_4 - 1] [i_5] [i_4]))))))), (((/* implicit */int) var_6))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(((/* implicit */int) (unsigned short)25828)))) > (((((/* implicit */int) (unsigned short)36395)) % (((/* implicit */int) (short)-3783)))))))) : (max((916660497592363164ULL), (((/* implicit */unsigned long long int) min((((/* implicit */short) var_11)), (var_12))))))));
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 2) 
    {
        for (unsigned char i_7 = 0; i_7 < 13; i_7 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)39699)) && (((/* implicit */_Bool) arr_20 [i_7])))) || (((((/* implicit */_Bool) (unsigned short)29140)) || (((/* implicit */_Bool) arr_20 [i_7]))))));
                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_25 [i_6] [i_7] [i_7])) < (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-29676)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_8 [(unsigned short)5] [i_7] [(unsigned short)5] [i_6]))))) || ((!(((/* implicit */_Bool) (signed char)-37)))))))));
                var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (unsigned char)54))) ? ((-(var_9))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_12))))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) max((var_11), (var_2)));
}
