/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172365
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
    var_11 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)21)))))) : (min((arr_0 [i_0]), (((/* implicit */unsigned long long int) (unsigned short)13)))))) < (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_0)))))))));
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_5)))))))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    {
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1 - 2] [i_1 - 2]))))) ^ (((/* implicit */int) max(((unsigned short)36), (((/* implicit */unsigned short) var_6)))))));
                        arr_13 [i_2] [i_2] [i_3] [i_2] = max((max((((/* implicit */unsigned long long int) (unsigned short)1)), (14908502141098559349ULL))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((var_4) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128)))))) : (((((/* implicit */_Bool) (unsigned short)65525)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_7 = 0; i_7 < 12; i_7 += 3) 
                        {
                            var_15 = ((signed char) -1803445050);
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)127)))) ? (((/* implicit */int) (signed char)-19)) : (((/* implicit */int) (unsigned short)65530))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_21 [i_0] [i_0] [i_5] [i_0] [i_0] [i_0])) <= (((/* implicit */int) max(((signed char)10), ((signed char)-43)))))))) : (321717310U)));
                        }
                        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (signed char)-119)), (((arr_17 [i_5]) ? (1755269865U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))))));
                            arr_29 [i_5] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)105)) ? (4646576012855492778LL) : (((/* implicit */long long int) 1879982105))))) ? (((/* implicit */int) arr_15 [3ULL] [i_6])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_5]))))))), ((((!(((/* implicit */_Bool) (short)-29592)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)20)))) : (((/* implicit */int) (signed char)-43))))));
                        }
                        var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)-10))));
                        arr_30 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned long long int) (signed char)-50);
                        var_19 += ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4))) : (239731646277652150ULL)))) && (((/* implicit */_Bool) min((3330414210U), (((/* implicit */unsigned int) (unsigned char)151))))))))));
                    }
                } 
            } 
        } 
    }
}
