/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12606
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
    var_19 &= ((/* implicit */unsigned char) var_15);
    var_20 = ((/* implicit */signed char) (~(((/* implicit */int) max((((unsigned short) var_9)), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_7))))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
        var_21 = ((/* implicit */unsigned long long int) var_13);
        arr_4 [(_Bool)1] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) max((arr_1 [(_Bool)1]), (((/* implicit */int) var_6))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) : (max((((arr_0 [i_0]) % (((/* implicit */unsigned int) arr_1 [(_Bool)1])))), (((unsigned int) -6894407573803461877LL))))));
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) var_13))));
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_23 += ((/* implicit */signed char) (-(max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))))), (max((arr_2 [i_1]), (((/* implicit */unsigned int) var_13))))))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            var_24 = ((/* implicit */signed char) var_3);
            arr_11 [i_2] = ((/* implicit */int) max((var_6), (((/* implicit */signed char) max(((!(((/* implicit */_Bool) (unsigned char)212)))), (((arr_2 [i_2]) > (var_4))))))));
            arr_12 [i_2] [i_1] [i_2] = ((/* implicit */long long int) max((1472985674490524697ULL), (7814824923779515364ULL)));
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
                {
                    {
                        var_25 = ((/* implicit */unsigned char) ((short) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3897))) * (37320203U))), (((/* implicit */unsigned int) (unsigned char)58)))));
                        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) var_1))));
                    }
                } 
            } 
        }
        var_27 += min(((+(var_17))), (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)38))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
        arr_19 [i_1] = ((/* implicit */unsigned int) arr_1 [(signed char)20]);
        var_28 -= var_16;
    }
    var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))), (((562945658454016ULL) >> (((((/* implicit */int) var_8)) - (158))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_17)) + (((((/* implicit */long long int) ((/* implicit */int) var_13))) - (var_3))))))));
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 19; i_5 += 3) 
    {
        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 3) 
        {
            {
                var_30 = ((/* implicit */signed char) min((((/* implicit */unsigned char) (signed char)-109)), ((unsigned char)176)));
                arr_27 [i_5] [i_6] = ((/* implicit */unsigned int) var_18);
                var_31 += ((/* implicit */signed char) ((unsigned char) var_13));
            }
        } 
    } 
}
